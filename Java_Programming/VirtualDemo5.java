class Base
{
    public int i,j;
    public void fun()
        {   System.out.println("Inside Base Fun\n"); }
    public void gun()
        {   System.out.println("Inside Base Gun\n"); }
    public void sun()
        {   System.out.println("Inside Base Sun\n"); }
    public void run()
        {   System.out.println("Inside Base Run\n"); }
}

class Derived extends  Base
{
    public int x;
    public void fun()
        {   System.out.println("Inside Derived Fun\n"); }
    public void sun()
        {   System.out.println("Inside Derived Sun\n"); }
    public void mun()
        {   System.out.println("Inside Derived Mun\n"); }
    public void bun()
        {   System.out.println("Inside Derived Bun\n"); }
}

class VirtualDemo5
{
    public static void main(String A[])
    {
        Base bp=new Derived();

        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
        //bp.mun();   //error
        //bp.bun();   //error
 
        }
}
