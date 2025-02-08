public class ThreadSleep {
    public static void main(String[] args) throws InterruptedException {
        System.out.print("Loading");
        
        for(int i=0; i<10; i++)
        {
            System.out.print(".");
            Thread.sleep(1000);
        }
    }
}
