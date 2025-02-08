public class Threadyield {
    public static void main(String[] args) {
        MyThread m1 = new MyThread();
        m1.start();

        for(int i = 0; i<5; i++)
        {
            System.out.println("Main Thread");
        }
    }
}

class MyThread extends Thread
{
    public void run()
    {

        for(int i = 0; i<5; i++)
        {
            System.out.println("Child Thread");
            Thread.yield();
        }
    }
}

