public class ThreadNames {
    public static void main(String[] args) {
        System.out.println("Current Thread is " + Thread.currentThread().getName());       
        
        MyThread m1 = new MyThread();
        System.out.println(m1.getName());

        MyThread m2 = new MyThread();
        System.out.println(m2.getName());
    
        m1.setName("Thread 1");
        m2.setName("Thread 2");
        Thread.currentThread().setName("JSM");

        System.out.println("Current Thread is " + Thread.currentThread().getName());
        System.out.println(m1.getName());
        System.out.println(m2.getName());
    }
}

class MyThread extends Thread
{

}