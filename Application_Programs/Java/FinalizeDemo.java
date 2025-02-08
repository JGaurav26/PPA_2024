public class FinalizeDemo {
    public static void main(String[] args) {
        Employee e1 = new Employee("Gaurav", 10000000, 19, "Pune");
        e1.display();
        e1 = null;
        System.gc();
    }
}

class Employee
{
    public String name;

    public int salary;

    public int age;
    
    public String address;


    Employee(String name, int salary, int age, String address)
    {
        this.name = name;
        this.salary = salary;
        this.age = age;
        this.address = address;
    }

    void display()
    {
        System.out.println("Employee Name :: " + this.name);
        System.out.println("Employee Salary :: " + this.salary);
        System.out.println("Employee Age :: " + this.age);
        System.out.println("Employee Address :: " + this.address);
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method");
    }
}


