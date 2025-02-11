import java.io.File;

public class delete {
    public static void main(String[] args) {
        try {
            File fileObj = new File("ppa.txt");
            fileObj.delete();
        } catch (Exception e) {
            // TODO: handle exception
        }
    }
}
