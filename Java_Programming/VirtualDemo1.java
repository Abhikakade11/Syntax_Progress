

class Base
{
    public int i,j;
}

class Derived extends Base
{
    public int x;
}
class VirtualDemo1
{
    public static void main(String A[])
    {
        Base bp1=new Base();            //No Casting
        Base bp2=new Derived();         //Up Casting
    
        Derived dp1=new Derived();      //No Casting
        //Derived *dp1=new Base();      //Down Casting

    }
}

