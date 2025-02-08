class Arithmetic
{
    // Addition of two integers
    public int Addition(int A, int B)
    {
        return A + B;
    }

    // Addition of three integers
    public int Addition(int A, int B, int C)
    {
        return A + B + C;
    }

    // Addition of two doubles
    public double Addition(double A, double B)
    {
        return A + B;
    }

    public void Addition(int A, double B)
    {
        System.out.println("Inside int-double Addition");
    }

    public void Addition(double A, int B)
    {
        System.out.println("Inside double-int Addition");
    }
}

public class OverloadingX
{
    public static void main(String[] args)
    {
        Arithmetic aobj = new Arithmetic();
        int ires = 0;
        double dres = 0;

        ires = aobj.Addition(10, 20); // Calls method with two integer parameters
        System.out.println("Addition of two integers is = " + ires);

        ires = aobj.Addition(10, 20, 30); // Calls method with three integer parameters
        System.out.println("Addition of three integers is = " + ires);

        dres = aobj.Addition(10.9999, 20.9999); // Calls method with two double parameters
        System.out.println("Addition of two doubles is = " + dres);
    
        aobj.Addition(10, 90.9999);
        aobj.Addition(90.9999, 10);
    }
}
