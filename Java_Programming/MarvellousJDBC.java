import java.sql.*;


public class MarvellousJDBC
{
    public static void main(String A[]) 
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA55X","root","");

            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("Select * From student");

            while (rs.next())
            {
                System.out.println("Roll no:"+rs.getInt("Rno"));
                System.out.println("Name :"+rs.getString("Name"));
                System.out.println("City :"+rs.getString("City"));
                System.out.println("Marks :"+rs.getInt("Marks"));
                System.out.println("__________________________");
                
            }
            rs.close();
            stmt.close();
            con.close();

        }
        catch (Exception e)
        {
            System.out.println("Exception occured :"+e);
        }
    }
}