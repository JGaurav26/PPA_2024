class Base
{
    public void fun() // 1000
    {
        System.out.println("Base fun()");
    }

    public void gun() // 2000
    {
        System.out.println("Base gun()");
    }

    public void sun() // 3000
    {
        System.out.println("Base sun()");
    }

    public void run() // 4000
    {
        System.out.println("Base run()");
    }
}

class Derived extends Base
{
    public void fun() // 5000
    {
        System.out.println("Derived fun()");
    }

    public void gun() // 6000
    {
        System.out.println("Derived gun()");
    }

    public void run(int no) // 7000
    {
        System.out.println("Derived run()");
    }

    public void mun() // 8000
    {
        System.out.println("Derived mun()");
    }
}


public class Overriding
{
    public static void main(String[] args)
    {
        Base baseobj = new Derived(); // upcasting
        // Derived derobj = new Base(); // downcasting --> NOT ALLOWED
        Derived derobj1 = new Derived(); // No casting
        baseobj.fun(); // CALL 5000 from Derived
        baseobj.gun(); // CALL 6000 from Derived
        baseobj.sun(); // CALL 3000 from Base
        baseobj.run(); // CALL 4000 from Base

        // baseobj.run(10); --> // ERROR bcz reference class ie base class not have this method with int argument
        derobj1.run(); // CALL 4000 from Base
        derobj1.run(10); // CALL 7000 from Derived
    }
}