
import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int FineAmount = 0;

        String HelmetWorn;
        String LicenseAvailable;
        String Overspeeding;

        System.out.println("Helmet Worn (Yes/No) : ");
        HelmetWorn = sobj.next();

        System.out.println("License Available (Yes/No) : ");
        LicenseAvailable = sobj.next();

        System.out.println("Overspeed (Yes/No) : ");
        Overspeeding = sobj.next();

        
        if(!(HelmetWorn.equalsIgnoreCase("Yes") || HelmetWorn.equalsIgnoreCase("No")) ||
           !(LicenseAvailable.equalsIgnoreCase("Yes") || LicenseAvailable.equalsIgnoreCase("No")) ||
           !(Overspeeding.equalsIgnoreCase("Yes") || Overspeeding.equalsIgnoreCase("No")))
        {
            System.out.println("Input must be Yes / No only");
            return;
        }

    
        if(HelmetWorn.equalsIgnoreCase("No"))
            FineAmount += 500;

        if(LicenseAvailable.equalsIgnoreCase("No"))
            FineAmount += 1000;

        if(Overspeeding.equalsIgnoreCase("Yes"))
            FineAmount += 1500;

        System.out.println("Total Fine Amount : " + FineAmount);
    }
}