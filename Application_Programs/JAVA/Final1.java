class Demo {
    public int A;
    public final int B;

    // Constructor to initialize A and B
    Demo() {
        A = 10;
        B = 20;
    }

    // Parameterized constructor to initialize A and B
    Demo(int i, int j) {
        A = i;
        B = j;
    }
}

public class Final1 {
    public static void main(String[] args) {
        Demo dobj = new Demo();
        System.out.println("Value of A: " + dobj.A);
        System.out.println("Value of B: " + dobj.B);

        dobj.A++;
        // dobj.B++; // COMPILE TIME ERROR: Cannot modify final variable

        Demo obj2 = new Demo(30, 40);
        System.out.println("Value of A: " + obj2.A);
        System.out.println("Value of B: " + obj2.B);
    }
}
