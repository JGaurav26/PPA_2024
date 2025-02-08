public class CaseStudy {
    public static void main(String[] args) {
        MyRunnable runnable = new MyRunnable();

        Thread t1 = new Thread();
        Thread t2 = new Thread(runnable);
    }
}

class MyRunnable implements Runnable
{
     public void run()
     {
        System.out.println("");
     }
}