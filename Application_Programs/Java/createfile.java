import java.io.*;
class createfile
{
    public static void main(String[] args) {
        try {
            File fileObj = new File("ppa.txt");
            if(!fileObj.exists());
            fileObj.createNewFile();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}