import java.util.*;

public class UserDefinedChecked 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your AGE :- ");
        int iAge = sc.nextInt();

        try
        { 
            if(iAge < 18)
            {
                throw new AgeInvalidException("Your Age is less than 18 years");
            }
        }

        catch(AgeInvalidException ex)
        {
            System.out.println(ex);
        }
    }    
}

class AgeInvalidException extends Exception
{
    public AgeInvalidException(String msg)
    {
        super(msg);
    }
}