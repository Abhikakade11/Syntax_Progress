interface A
{
    void fun();
}
interface B 
{
    void fun(int no);  
}
class Demo implements A,B
{ 
    public void fun()
    {
        System.out.println("Inside Fun");
    }
    public void fun(int no)
    {
        System.out.println("Inside Fun With no");
    }
}
class InterfaceDemoXXXXX
{
    public static void main(String A[])
    {
        Demo d1 = new Demo();
        d1.fun();
        d1.fun(11);
    }
}