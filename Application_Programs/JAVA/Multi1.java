class MyThread extends Thread {

    public void run()
    {
        System.out.println("Thread is running");
    }
    
}



public class Multi1 {
    public static void main(String[] args) {
        System.out.println("Inside : " +Thread.currentThread().getName());

        MyThread myThread1 = new MyThread();
        MyThread myThread2 = new MyThread();

        myThread1.start();
        myThread2.start();
    }
}
