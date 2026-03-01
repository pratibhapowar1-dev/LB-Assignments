
import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int Weignt = 0;
        int charges = 0;

        System.out.println("Parcel weight in kg : ");
        Weignt = sobj.nextInt();

        if(Weignt < 0)
        {
            System.out.println("Invalid Input");
        }

        if(Weignt <= 1)
        {
            charges = 50;
        }
        else if(Weignt < 5)
        {
            charges = 50 + (20*Weignt);
        }
        else if(Weignt > 5)
        {
            charges = 150 + (30*Weignt);
        }

        System.out.println("Parcel weight :"+ Weignt);
        System.out.println("Courier charge : "+charges);
    }
}