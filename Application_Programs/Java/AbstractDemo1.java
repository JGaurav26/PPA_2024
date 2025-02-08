abstract class Demo //. RBI
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

class Hello extends Demo // SBI extends RBI
{
    public Hello()
    {
        System.out.println("Hello Construtor");
    }
        public void fun()
        {
            System.out.println("Hello fun");
        }
    }

public class AbstractDemo1 {
    public static void main(String[] args) {
        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
        // Demo obj1 = new Demo(); // cant instantiate ie cant create the onject of abstract class
    }
}
