interface Calculations
{
    int Addition(int no1, int no2);          //abstract Method
    int Substraction(int no1, int no2);      //abstract Method
}
class Math implements Calculations
{
    public int Addition(int no1, int no2)    //abstract method body
    {
        return no1+no2;
    }
    public int Substraction(int no1, int no2)  //abstract method body
    {
        return no1-no2;
    }
    public int Multiplicatin(int no1, int no2)  //own method for math class
    {
        return no1*no2;
    }
}
class InterfaceDemo 
{   
    public static void main(String A[])
        {
            Math m1=new Math();
            System.out.println(m1.Addition(11,10));         //21
            System.out.println(m1.Substraction(11,10));     //1
            System.out.println(m1.Multiplicatin(11,10));    //101
        }
       
}
