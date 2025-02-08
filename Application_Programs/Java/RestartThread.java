public class RestartThread {
    public static void main(String[] args) {
        MyThread m1 = new MyThread();
        m1.start(); // first time started

        System.out.println("Main Thread Running");
        System.out.println("Main Thread Running");
        System.out.println("Main Thread Running");

        m1.start(); // second time started
    }
}

class MyThread extends Thread
{
    public void run()
    {
        System.out.println("Child Running");
    }
}
