

public class SuperKeyword {
    public static void main(String[] args) {
        Child child1 = new Child();
        child1.show();

        Child child2 = new Child(50);
        child2.show();
    }    
}

class Parent {
    int A;
    Parent()
        {
            System.out.println("Inside Parent default construcotr");
        }

        Parent(int x)
        {
            this.A = x;
            System.out.println("Inside Parent parametrized construcotr");
        }

        void display()
        {
            System.out.println("Inside Parent display()");
        }
}

class Child extends Parent
{
    int B;

    Child()
        {
            super(10);
            System.out.println("Inside Child default construcotr");
        }

    Child(int y)
        {
            this.B = y;
            System.out.println("Inside Child parametrized construcotr");
        }

        void show()
        {
            System.out.println("I am in show");
            System.out.println("Parent.A = " + super.A);
            super.display();
        }
}
