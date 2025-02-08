public class ThreadPriority {
    public static void main(String[] args) {
        MyThread m1 = new MyThread();
        MyThread m2 = new MyThread();
        
        System.out.println("main thread priority" + Thread.currentThread().getName());
        System.out.println("m1 priority :" + m1.getPriority());
        System.out.println("m2 priority :" + m2.getPriority());
        m1.setPriority(10);
        m1.setName("m1");
        m2.setName("m2");
        m1.start();
        m2.start();

        
    }
}

class MyThread extends Thread
{
    public void run()
    {
        System.out.println("Current thread is : " + Thread.currentThread().getName());
    }
}