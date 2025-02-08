public class UserDefinedUnchecked 
{
    public int division(int No1, int No2) throws DivideByZeroException
    {
        if(No2 <= 0)
        {
            throw new DivideByZeroException("You cant divide a number by 0");
        }
        else 
        {
            return No1/No2;
        }
    }
    public static void main(String[] args)
    {
        UserDefinedUnchecked obj1 = new UserDefinedUnchecked();
        try 
        {
            obj1.division(20, 0);
        }

        catch(DivideByZeroException ex)
        {
            System.out.println(ex);
        }
    }    
}

class DivideByZeroException extends RuntimeException
{
    DivideByZeroException(String msg)
    {
        super(msg);
    }
}
