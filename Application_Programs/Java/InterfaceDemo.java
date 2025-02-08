interface Maths
{
    // by default every method in the interface is 'public and abstract'
    public int Addition(int A, int B);
    public int Subtraction(int A, int B);
}

class Tenth implements Maths
{
    public int Addition(int A, int B)
    {
        return A  + B;
    }

    public int Subtraction(int A, int B)
    {
        return A  - B;
    }
}



public class InterfaceDemo {
    public static void main(String[] args) {
        Tenth obj = new Tenth();
        int iRes = 0;
        iRes = obj.Addition(10, 20);
        System.out.println("Addition is : " +iRes);
        iRes = obj.Subtraction(20, 10);
        System.out.println("Subtraction is : " +iRes);
    }
}
