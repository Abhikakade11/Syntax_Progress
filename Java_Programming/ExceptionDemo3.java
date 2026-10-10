import java.util.*;

class Demo
{
    public static int Division(int no1,int no2)
    {
        return no1/no2;
    }

}

class ExceptionDemo3
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int no1=0, no2=0, Ans=0;

        System.out.println("Enter 1st Numbers");
        no1=sobj.nextInt();

        System.out.println("Enter 2nd Numbers");
        no2=sobj.nextInt();

        Ans=Demo.Division(no1,no2);

        System.out.println("Division is :"+Ans);

    }
}