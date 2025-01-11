interface Demo{
    public void fun();
}

interface Hello{
    public void gun(); 
}

class JSM implements Demo,Hello{
    public void fun(){
        System.out.println("fun body provided in JSM");
    }

    public void gun(){
        System.out.println("gun body provided in JSM");
    }
}


public class InterfaceDemoX {
    public static void main(String[] args) {
        
    }
}
