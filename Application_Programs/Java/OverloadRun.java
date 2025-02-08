public class OverloadRun {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();

        t1.run(10);
    }
}

class MyThread extends Thread
{
    public void run() // override run()
    {
        System.out.println("No Argument run()");
    }

    public void run(int i) // override run() with parameter
    {
        System.out.println("With Argument run()");
    }
}