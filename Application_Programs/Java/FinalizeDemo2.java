public class FinalizeDemo2 {
    public static void main(String[] args) {
        Employee e1 = new Employee("Gaurav", 10000000, 19, "Pune");
        e1.display();
        System.out.println("hashCode of e1 " + e1.hashCode());

        Employee e2 = e1;
        System.out.println("hashCode of e2 " + e2.hashCode());
        System.out.println(e1.hashCode() == e2.hashCode());

        Employee e3 = new Employee("Nikita", 10000000, 21, "Pune");
        System.out.println("hashCode of e3 " + e3.hashCode());

        System.out.println(e3.getClass());
        System.out.println("".getClass());
        System.out.println(new Integer(0).getClass());

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


