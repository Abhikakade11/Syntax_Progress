

class Base
{
    public int i,j;
    public void fun()
        {
            System.out.println("Inside Base fun");
        }
}

class Derived extends Base
{
    public int x;
    public void fun()
        {
            System.out.println("Inside Derived fun");
        }

}
class VirtualDemo2
{
    public static void main(String A[])
    {
        Base bp=new Derived();          //Up Casting

        bp.fun();                      //Base Fun
    }
}
