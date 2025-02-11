import java.io.FileInputStream;


public class readfile {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("ppa.txt");
            int i = 0;
            while ((i = fis.read()) != -1) {
                
                System.out.print((char)i);
            }
            System.out.println("\n");
        } catch (Exception e) {
            // TODO: handle exception
        }
    }
}
