public class Functions {
    int number = 10;

    public void callByValue(int x)
    {
        x++;
        System.out.println("value of x inside method : " +x);
    }

    public void callByReference(Functions obj)
    {
        obj.number++;
        System.out.println("Value of obj.number inside method : " +obj.number);
    }

    public static void main(String[] args) {
        Functions obj1 = new Functions();

        int i = 10;

        System.out.println("Value of i before : " +i);
        obj1.callByValue(i);
        System.out.println("Value of i after : " +i);
    
        System.out.println("Value of i before : " +i);
        obj1.callByReference(obj1);
        System.out.println("Value of i after : " +i);
    
    }

}