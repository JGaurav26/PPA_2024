interface Circle
{
    public float PI = 3.14f;
    public float Area(float radius);
    public float circumference(float radius);
}

class Geometry implements Circle
{
    public float Area(float radius)
    {
        return PI * radius * radius;
    }

    public float circumference(float radius)
    {
        return 2 * PI * radius;
    }
}

public class InterfaceDemo1 {
    // System.out.println("Value of PI : " +Circle.PI);
    public static void main(String[] args) {
        Geometry obj1 = new Geometry();
        System.out.println("Value of PI : " +Circle.PI); // can access PI as it it public static
        // Cirlce.PI = 10.5f; ---> cant reassign final cariable
        float fRes = 0.0f;
        fRes = obj1.Area(5);
        System.out.println("Area is : " +fRes+" sq meter");

        fRes = obj1.circumference(10);
        System.out.println("Circumference is : " +fRes+ " meter");
    }
}
