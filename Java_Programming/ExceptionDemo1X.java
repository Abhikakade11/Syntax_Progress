import java.util.*;
class ExceptionDemo1X
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int no1=0, no2=0, Ans=0;

        try
        {
            System.out.println("Enter 1st Numbers");
            no1=sobj.nextInt();

            System.out.println("Enter 2nd Numbers");
            no2=sobj.nextInt();

            Ans=no1/no2;      //Exception Prone Code
        }

        catch(ArithmeticException aobj)
        {
            System.out.println("Exception Occured"+aobj);
        }

        finally
        {
            System.out.println("Inside Fianlly Blocked");
        }

        System.out.println("Division is :"+Ans);

    }
}