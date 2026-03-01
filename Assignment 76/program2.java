
import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
       int Marks = 0;
       int Attendancy = 0;
        double Income = 0;

        System.out.println("Enter markes in % ");
        Marks = sobj.nextInt();

        System.out.println("Attendancy : ");
        Attendancy = sobj.nextInt();

        System.out.println(" Family Income : ");
        Income = sobj.nextInt();

        if((Marks <=0 || Marks >= 100 )||(Attendancy <=0 || Attendancy>=100)||(Income<0))
        {
            System.out.println("Invalid Input");
        }

        if(Marks < 80)
        {
            System.out.println("Scolarship Reject : Markes < 80 %");

        }
        else if(Attendancy < 75)
        {
            System.out.println("Scolarship Reject : Attendancy < 75%");

        }
        else if(Income >3000000)
        {
            System.out.println("Scolarship Reject : Income >3000000");

        }
        else
        {
            System.out.println("Scolarship Appoved");

        }
        
    }   
}