public class OverrideStartSuper {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}

class MyThread extends Thread
{
    public void start()
    {
        super.start();
        System.out.println("Start Method");
    }

    public void run()
    {
        System.out.println("Run Method");
    }
}
