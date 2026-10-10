class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running.....");
    }
}

class ThreadDemo6
{

    public static void main(String A[]) throws Exception 
    {
        System.out.println("Inside Main Thread");  

        Demo dobj1 = new Demo();

        Demo dobj2 = new Demo();

        dobj1.start();
        dobj2.start();

        dobj1.join();     //join method lagane ke baad jo main thread hota hai vo sab thread se kam - 
        dobj2.join();     // -karne ke bad jata hai matlab main thread sab thread ke bad jata hai

        System.out.println("End of main thread");    //issue

    }
}