class Base // PARENT CLASS
{
    public int A, B; // characteristics

    public Base() // default constructor
    {
        System.out.println("Inside Base --> Default constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base // CHILD 1 CLASS
{
    public int P, Q; // characteristics

    public Derived() // default constructor
    {
        System.out.println("Inside Derived --> Default constructor");
    }

    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class Derived2 extends Base // CHILD 2 CLASS
{
    public int x, y; // characteristics

    public Derived2() // default constructor
    {
        System.out.println("Inside Derived2 Default Constructor");
    }

    public void run()
    {
        System.out.println("Inside Derived2 run");
    }
}

public class Hierarchical
{
    public static void main(String[] args)
    {
        System.out.println("Using Derived object:");
        Derived dobj = new Derived(); // NO-CASTING
        dobj.A = 10; // Access Base class property
        dobj.P = 20; // Access Derived class property
        System.out.println("Value of Base A: " + dobj.A);
        System.out.println("Value of Derived P: " + dobj.P);
        dobj.fun(); // Base class method
        dobj.gun(); // Derived class method

        System.out.println("\nUsing Derived2 object:");
        Derived2 der2obj = new Derived2(); // NO-CASTING
        der2obj.A = 30; // Access Base class property
        der2obj.x = 40; // Access Derived2 class property
        System.out.println("Value of Base A: " + der2obj.A);
        System.out.println("Value of Derived2 x: " + der2obj.x);
        der2obj.fun(); // Base class method
        der2obj.run(); // Derived2 class method
    }
}
