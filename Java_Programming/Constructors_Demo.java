class Hello
{
    Hello()                      //Default Constructor
    {
        System.out.println("Inside Default Constructor...");
    }
    Hello(int i,int j)          //Parameterised Constructor
    {
        System.out.println("Inside Parameterised Constructor");;
    }
}

class Constructors_Demo
{   
    public static void main(String A[])
    {
        Hello h1=new Hello();
        Hello h2=new Hello(10,20);
    }
}