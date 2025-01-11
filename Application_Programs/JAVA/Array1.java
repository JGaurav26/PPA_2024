public class Array1 {
    public static void main(String[] args) {
        int Arr1[] = {10,20,30,40,50}; // MEMBER INITIALIZATION LIST
        
        int Arr2[] = new int [5]; // MEMBER BY EMBER INITIALIZATION LIST
        Arr2[0] = 10;
        Arr2[1] = 20;
        Arr2[2] = 30;
        Arr2[3] = 40;
        Arr2[4] = 50;

        System.out.println("Length of the Arr1 = " + Arr1.length);
        System.out.println("Length of the Arr2 = " + Arr2.length);

        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr1.length ; iCnt++)
        {
            System.out.println(Arr1[iCnt]);
        }
    }    
}
