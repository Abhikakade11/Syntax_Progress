import java.util.*;
class Selection1
{
    public static void main(String[] args) 
    {
        Scanner s1=new Scanner(System.in);
        int no=0;

        System.out.println("Enter A Number");
        no=s1.nextInt();

        if (no%2==0) 
            {
                System.out.println("Even Number");
            }
        else
            {
                System.out.println("Odd Number");
            }
    }
}