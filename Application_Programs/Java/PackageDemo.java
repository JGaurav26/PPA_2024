import JSM.*;
import JSM.Infotech.*;


public class PackageDemo {
    public static void main(String[] args) {
        Maths1 mobj = new Maths1();
        int iRes = mobj.Addition(10, 20);
        System.out.println("Result is " + iRes);


        ArithmeticPackage a1 = new ArithmeticPackage();
        iRes = a1.Substraction(10, 5);
        System.out.println("Subtraction is : " +iRes);
    }
}