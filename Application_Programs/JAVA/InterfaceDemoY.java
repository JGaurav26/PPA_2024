interface Demo{
    public void gun();
}

interface Hello extends Demo{
    public void fun(); 
}

class JSM implements Hello {
    public void fun(){
        System.out.println("fun implemented");
    }

    public void gun(){
        System.out.println("gun implemented");
    }
}

public class InterfaceDemoY {
    public static void main(String[] args) {
        
    }
}
