import java.util.Scanner;

class InputOutput {
    public static void main(String[] args) {
        Scanner scannerObj = new Scanner(System.in);

        System.out.print("Enter first number: "); // Corrected typo
        int num1 = scannerObj.nextInt(); // Variable name changed to camelCase

        System.out.print("Enter second number: "); 
        int num2 = scannerObj.nextInt(); // Variable name changed to camelCase

        int result = num1 + num2; // Variable name changed to camelCase

        System.out.println("Addition is = " + result); // Used updated variable name

        scannerObj.close();
    }
}
