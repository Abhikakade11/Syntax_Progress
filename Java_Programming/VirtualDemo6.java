

class Base
{
        int i,j;
        void fun()                                   //1000
        {   System.out.println("Base Fun\n"); }   
        void gun()                                   //2000
        {   System.out.println("Base gun\n"); }   
        void sun()                                  //3000
        {   System.out.println("Base sun\n"); }   
        void run()                                  //4000
        {   System.out.println("Base Run\n"); }   

        
}    

class Derived extends Base
{
    
        int x;
        void fun()                                      //5000
        {   System.out.println("Derived Fun\n"); }    
        void sun()                                      //6000
        {   System.out.println("Derived sun\n"); }    
        void mun()                                      //7000
        {   System.out.println("Derived mun\n"); }   
        void bun()                                      //8000
        {   System.out.println("Derived bun\n"); }    


}  
class VirtualDemo6
{

    public static void main(String A[])
    {

        Base bp=new Derived();

        bp.fun();          //Derived Fun
        bp.gun();          //Base Gun
        bp.sun();          //Derived Sun
        bp.run();          //Base Run
        //bp.mun();   //error
        //bp.bun();   //error

    }
}