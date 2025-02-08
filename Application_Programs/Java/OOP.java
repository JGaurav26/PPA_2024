import java.util.Scanner;

class Arithmetic {
    int Value1, Value2; // characteristics

    public Arithmetic(int A, int B) {
        this.Value1 = A;
        this.Value2 = B;
    }

    public int Addition() {
        int Result = 0;
        Result = this.Value1 + this.Value2;
        return Result;
    }

    public int Subtraction() {
        int Result = 0;
        Result = this.Value1 - this.Value2;
        return Result;
    }
}

public class OOP {
    public static void main(String[] args) {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner scannerObj = new Scanner(System.in);
        System.out.println("Enter first no.: ");
        No1 = scannerObj.nextInt(); // Corrected redundant variable declaration

        System.out.println("Enter second no.: ");
        No2 = scannerObj.nextInt(); // Corrected redundant variable declaration

        // Creating an object of the Arithmetic class
        Arithmetic aobj1 = new Arithmetic(No1, No2);

        Ans = aobj1.Addition();
        System.out.println("Addition is: " + Ans);

        Ans = aobj1.Subtraction(); // Added missing semicolon
        System.out.println("Subtraction is: " + Ans);

        scannerObj.close();
    }
}
