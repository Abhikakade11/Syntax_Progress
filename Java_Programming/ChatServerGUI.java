import java.io.*;
import java.net.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class ChatServerGUI extends JFrame
{
    private JTextArea chatArea;
    private JTextField messageField;
    private JButton sendButton;

    private volatile PrintWriter writer;

    public ChatServerGUI()
    {
        setTitle("Marvellous Chat - Server");
        setSize(500, 450);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout(10, 10));

        JLabel status = new JLabel("Waiting for client...");
        chatArea = new JTextArea();
        chatArea.setEditable(false);

        messageField = new JTextField();
        sendButton = new JButton("Send");

        JPanel bottom = new JPanel(new BorderLayout(5, 5));
        bottom.add(messageField, BorderLayout.CENTER);
        bottom.add(sendButton, BorderLayout.EAST);

        add(status, BorderLayout.NORTH);
        add(new JScrollPane(chatArea), BorderLayout.CENTER);
        add(bottom, BorderLayout.SOUTH);

        sendButton.addActionListener(e -> sendMessage());
        messageField.addActionListener(e -> sendMessage());

        setLocationRelativeTo(null);
        setVisible(true);

        new Thread(() -> startServer(status)).start();
    }

    private void startServer(JLabel status)
    {
        try (ServerSocket server = new ServerSocket(5151))
        {
            appendMessage("Server started on port 5151");

            try (Socket socket = server.accept())
            {
                writer = new PrintWriter(
                    socket.getOutputStream(), true);

                BufferedReader reader = new BufferedReader(
                    new InputStreamReader(socket.getInputStream()));

                SwingUtilities.invokeLater(() ->
                    status.setText("Client connected"));

                appendMessage("Client connected!");

                String message;

                while ((message = reader.readLine()) != null)
                {
                    appendMessage("Client: " + message);
                }

                appendMessage("Client disconnected.");
            }
        }
        catch (IOException e)
        {
            appendMessage("Server error: " + e.getMessage());
        }
    }

    private void sendMessage()
    {
        String message = messageField.getText().trim();

        if (message.isEmpty())
            return;

        PrintWriter out = writer;

        if (out == null)
        {
            appendMessage("Client is not connected yet.");
            return;
        }

        out.println(message);
        appendMessage("Server: " + message);
        messageField.setText("");
    }

    private void appendMessage(String message)
    {
        SwingUtilities.invokeLater(() ->
            chatArea.append(message + "\n"));
    }

    public static void main(String[] args) throws Exception
    {
        SwingUtilities.invokeLater(ChatServerGUI::new);
    }
}