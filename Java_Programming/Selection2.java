import java.util.*;
class Selection2
{
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
        int no=0;

        System.out.println("Enter Your Age");
        no=s1.nextInt();

        if (no>=18) 
        {
            System.out.println("Allowed");   
        }
        else
        {
            System.out.println("Not Allowed");
        }
    }
}