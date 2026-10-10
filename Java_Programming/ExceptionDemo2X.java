import java.util.*;
class ExceptionDemo2X
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int arr[]={11,21,51,101,111};
        
        int index=0;

        try
        {
            System.out.println("Enter The Index ");
            index=sobj.nextInt();

            System.out.println("Element is :"+arr[index]);
        }

        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("Inside catch"+aobj);
        }

        System.out.println("End of main");

    }
}