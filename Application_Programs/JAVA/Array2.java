public class Array2 {
    public static void main(String[] args) {
        int Arr[][] = { {10,20,30}, {40,50,60}, {70,80,90} }; // MEMBER INITIALIZATION LIST

        int Brr[][] = new int[3][3]; // MEMBER BY MEMBER INITIALIZATION
        Brr[0][0] = 10;
        Brr[0][1] = 20;
        Brr[0][2] = 30;

        Brr[1][0] = 40;
        Brr[1][1] = 50;
        Brr[1][2] = 60;

        Brr[2][0] = 70;
        Brr[2][1] = 80;
        Brr[2][2] = 90;

        System.out.println("Length of Brr = " + Brr.length);

        int i = 0, j = 0;

        for(i = 0; i < Brr.length; i++) // OUTER
        {
            for(j = 0; j < Brr[i].length; j++) // INNER
            {
                //System.out.println(Brr[i][j]);
                System.out.print(Brr[i][j] + "\t");
            }
            System.out.println();
        }

    }
}
