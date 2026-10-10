import java.util.Scanner;
class Addition
{
    public static void main(String A[])
    {
        Scanner s1=new Scanner(System.in);

        System.out.println("Enter 1st number:");
        int i=s1.nextInt();

        System.out.println("enter 2nd Number:");
        int j=s1.nextInt();

        int Ans=i+j;
        System.out.println("Addition is: "+Ans);

    }

}