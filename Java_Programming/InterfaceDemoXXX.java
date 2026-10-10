interface A
{
    void fun();
}
interface B 
{
    void fun();
}
class Demo implements A,B
{
    public void fun()
    {
        System.out.println("Inside Fun");
    }
}
class InterfaceDemoXXX
{
    public static void main(String A[])
    {
        Demo d1 = new Demo();
        d1.fun();
    }
}