class Marvellous
{
    public int no1;         //This are Characteristic
    public int no2;
    
    public void fun()       //This are Behaviever
    {
        System.out.println("Inside Fun...");
    }
}

class Encapsulation
{
    public static void main(String A[])
    {
        Marvellous m1=new Marvellous();

        m1.no1=11;
        m1.no2=21;
        m1.fun();

        System.out.println(m1.no1);
        System.out.println(m1.no2);

    }
}