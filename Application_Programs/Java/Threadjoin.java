public class Threadjoin {
    public static void main(String[] args) throws InterruptedException{
        
        MyThread sita = new MyThread();
        sita.start();
        sita.join();

        for(int i = 0; i<5; i++)
        {
            System.out.println("Ram Thread");
        }
    }
}

class MyThread extends Thread{
    public void run()
    {

        for(int i = 0; i<5; i++)
        {
            System.out.println("Sita Thread");
            try{Thread.sleep(2000);
            }catch(InterruptedException e){}
        }
    }
}
