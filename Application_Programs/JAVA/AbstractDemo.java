abstract class Demo
{
    public int A,B;

    public Demo() 
    {
        System.out.println("Inside Demo Constructor");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun(); // virtual void fun() = 0; --> C++ syntax

    // CONCRETE METHOD - method with body
    void gun()
    {
        System.out.println("Inside Demo gun");
    }
}

public class AbstractDemo {
    // Demo obj1 = new Demo(); // cant instantiate ie cant create the onject of abstract class
}
