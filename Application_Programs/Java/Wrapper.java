public class Wrapper {
    public static void main(String[] args) {
        int i = 10;
        Integer iobj = i; // BOXING
        System.out.println(i);
        System.out.println(iobj);

        int no = iobj; // UNBOXING
        System.out.println(no);
    }
}
