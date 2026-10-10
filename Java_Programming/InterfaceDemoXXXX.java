interface A
{
    void fun();
}
interface B 
{
    void gun();
}
class Demo implements A,B
{
    public void fun()
    {
        System.out.println("Inside Fun");
    }
    public void gun()
    {
        System.out.println("Inside Gun");
    }
}
class InterfaceDemoXXXX
{
    public static void main(String A[])
    {
        Demo d1 = new Demo();
        d1.fun();
        d1.gun();
    }
}