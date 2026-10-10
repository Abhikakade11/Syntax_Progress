class Demo
{
    public void Add(int i,int j)
    {
        int ans=0;
        ans=i+j;
        System.out.println("Addition is :"+ans);

    }

    public void Add(int a,int b,int c)
    {
        int ans=0;
        ans=a+b+c;
        System.out.println("Addition is :"+ans);
    }

    public void Add(float k,float l)
    {
        float ans=0;
        ans=k+l;
        System.out.println("Addition is :"+ans);
    }
}
class DemoX 
{
    public static void main (String A[])
    {
        Demo dobj=new Demo();
        dobj.Add(10,10);
        dobj.Add(10,10,10);  
        dobj.Add( 10.10f,10.10f);    
    }
}

