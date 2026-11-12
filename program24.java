import java.util.*;

class program23
{
    public static void main(String A[])
    {
        Scanner scanner =null;
        String sName = null;

        scanner = new Scanner(System.in);
        
        System.out.println("Enter Your Name : ");
        sName= scanner.next();              //Word till first Space is taken(We can use underscore and test)

        System.out.println("Welcome "+ sName );
    }
}