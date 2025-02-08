class MyThread extends Thread 
{
    public void run()
    {
        for(int i = 0; i < 10; i++)
        {
            System.out.println("Child Thread");
        }
    }
}

public class Multi3 {
    public static void main(String[] args) {
        MyThread myThread1 = new MyThread();
        myThread1.start();

        for(int i = 0; i < 10; i++)
        {
            System.out.println(Thread.currentThread().getName() + " Thread");
        }
    }    
}
