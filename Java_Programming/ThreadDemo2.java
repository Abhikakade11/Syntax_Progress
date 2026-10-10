class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running.....");
    }
}

class ThreadDemo2
{

    public static void main(String A[])
    {
        System.out.println("Inside Main Thread");

        Demo dobj1 = new Demo();       //Thread 1
                   
        Demo dobj2 = new Demo();       //Thread 2

        dobj1.start();
        dobj2.start();

    }
}