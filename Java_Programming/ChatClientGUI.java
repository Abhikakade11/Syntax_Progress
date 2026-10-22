import java.io.*;
import java.net.*;
import javax.swing.*;
import java.awt.*;

public class ChatClientGUI extends JFrame
{
    private JTextArea chatArea;
    private JTextField messageField;
    private JButton sendButton;

    private volatile PrintWriter writer;

    public ChatClientGUI()
    {
        setTitle("Marvellous Chat - Client");
        setSize(500, 450);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout(10, 10));

        JLabel status = new JLabel("Connecting to server...");
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

        new Thread(() -> connectToServer(status)).start();
    }

    private void connectToServer(JLabel status)
    {
        try (Socket socket = new Socket("localhost", 5151))
        {
            writer = new PrintWriter(
                socket.getOutputStream(), true);

            BufferedReader reader = new BufferedReader(
                new InputStreamReader(socket.getInputStream()));

            SwingUtilities.invokeLater(() ->
                status.setText("Connected to server"));

            appendMessage("Connected to server!");

            String message;

            while ((message = reader.readLine()) != null)
            {
                appendMessage("Server: " + message);
            }

            appendMessage("Server disconnected.");
        }
        catch (IOException e)
        {
            appendMessage("Connection error: " + e.getMessage());
            SwingUtilities.invokeLater(() ->
                status.setText("Connection failed"));
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
            appendMessage("Server is not connected.");
            return;
        }

        out.println(message);
        appendMessage("You: " + message);
        messageField.setText("");
    }

    private void appendMessage(String message)
    {
        SwingUtilities.invokeLater(() ->
            chatArea.append(message + "\n"));
    }

    public static void main(String[] args) throws Exception
    {
        SwingUtilities.invokeLater(ChatClientGUI::new);
    }
}