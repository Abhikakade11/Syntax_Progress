import java.util.Scanner;
class Standard1
{
    public static void main(String A[])
    {
        Scanner s1=new Scanner(System.in);
        int std=0;

        System.out.println("Enter Your Standard:");
        std=s1.nextInt();

        if (std==1) 
        {
            System.out.println("Your Exam Time is 9.30 AM");
        }

        else if (std==2)
        {
            System.out.println("Your Exam Time is 10.30 AM");     
        }

        else if (std==3)
        {
            System.out.println("Your Exam Time is 11.30");    
        }
        
        else
        {
            System.out.println("Invalid Input");
        }

    }
}