class Jsm
{
    public int i;
    public int j;


//behaviours
public Jsm()
{
    System.out.println("Inside default constructor");
    this.i=0;
    this.j=0;
}

public Jsm(int a, int b)
{
    System.out.println("Inside parameterized constructor");
    this.i=a;
    this.j=b;
}

public void fun()
{
    System.out.println("Inside fun method");
}
}

class ClassDemo
{
    public static void main(String sss[])
    {
        System.out.println("Inside main method");
        Jsm obj1; // reference
        Jsm obj2 = new Jsm(); //object creation with default construtor
        Jsm obj3 = new Jsm(10,20); //object creation with default construtor

        System.out.println("obj2 details");
        System.out.println(obj2.i);
        System.out.println(obj2.j);   
    
        System.out.println("obj3 details");
        System.out.println(obj3.i);
        System.out.println(obj3.j); 

        obj3.fun();
    }
}