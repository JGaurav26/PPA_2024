public class Synchronize1 {
    public static void main(String[] args) {
        Addition t1 = new Addition();
        t1.start();

        Addition t2 = new Addition();
        t2.start();

        Addition t3 = new Addition();
        t3.start();

        Addition t4 = new Addition();
        t4.start();

        Addition t5 = new Addition();
        t5.start();

    }
}

class Addition extends Thread{
    static int i= 0;

    public void run()
    {
        System.out.println("Inside run");
        increment();
    }

    public void increment()
    {
        synchronized(this){
            System.out.println(++i);
        }
    }
}
