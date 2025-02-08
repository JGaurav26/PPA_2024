public class Threadjoin2 {
    public static void main(String[] args) {
        MyThread.m1 = Thread.currentThread();
        MyThread t1 = new MyThread();
        t1.start();

        for(int i = 0; i<5; i++)
        {
            System.out.println("Main Thread");
        }
    }
}

class MyThread extends Thread 
{
    static Thread m1;
    public void run()
    {
        for(int i = 0; i<5; i++)
        {
            System.out.println("Child Thread");
            
            try{
            m1.join();
            }
            catch(InterruptedException e){}
        }
    }
}
