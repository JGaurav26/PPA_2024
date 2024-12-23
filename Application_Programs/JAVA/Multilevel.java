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

class Derived extends Base // CHILD CLASS
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

class Derived2 extends Derived // GRANDCHILD CLASS
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

public class Multilevel
{
    public static void main(String[] args)
    {
        Base bobj = new Derived2(); // UP-CASTING
        System.out.println("Accessing Base class methods and properties through Base reference:");

        bobj.fun(); // Access Base class method
        
        System.out.println("\nUsing Derived2 object with proper casting:");
        Derived2 dobj = new Derived2(); // NO-CASTING
        
        dobj.A = 10; // Access Base class property
        dobj.P = 20; // Access Derived class property
        dobj.x = 30; // Access Derived2 class property
        
        System.out.println("Value of Base A: " + dobj.A);
        System.out.println("Value of Derived P: " + dobj.P);
        System.out.println("Value of Derived2 x: " + dobj.x);

        dobj.fun(); // Base class method
        dobj.gun(); // Derived class method
        dobj.run(); // Derived2 class method
    }
}
