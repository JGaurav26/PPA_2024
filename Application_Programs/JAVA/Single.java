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

public class Single
{
    public static void main(String[] args)
    {
        // Base bobj = new Derived(); // UP-CASTING

        Derived dobj = new Derived(); // NO-CASTING
        dobj.fun();
        dobj.gun();
    }
}
