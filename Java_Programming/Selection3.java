import java.util.*;
class Selection3
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int no=0;

        System.out.println("Enter Your Age :");
        no=sobj.nextInt();
        
        if(no<18)
        {
            System.out.println("Not Allowed");
        }
        else
        {
            System.out.println("Allowed");
        }
    }
}