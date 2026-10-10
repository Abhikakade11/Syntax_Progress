class Arithametic
{
    public int no1;
    public int no2;

    public Arithametic()
    {
        this.no1=0;
        this.no2=0;
        System.out.println(this.no1);
        System.out.println(this.no2);
    }

    public Arithametic(int i,int j)   //Parameterised Constructor
    {
        this.no1=i;
        this.no2=j;   
    }

    public int Addition()            //Bussiness Logic
    {
        int ans=0;
        ans = this.no1 + this.no2;
        return ans;  
    }

    public int Subtraction()         //Bussiness Logic 
    {
        int ans=0;
        ans= this.no1 - this.no2;
        return ans;
    }
}

class OOPXX
{
    public static void  main(String  A[])
    {

        Arithametic a1=new Arithametic(21,10);

        int result=0;

        result=a1.Addition();
        System.out.println("Addition is : "+result);

        result=a1.Subtraction();
        System.err.println("Subtraction is : "+result);

    }
}