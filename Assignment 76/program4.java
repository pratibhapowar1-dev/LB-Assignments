import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int BateryPercentage = 0;
        String Stutes = null; 

        System.out.println("Batery percentage : ");
        BateryPercentage = sobj.nextInt();
        
        if(BateryPercentage >=100 || BateryPercentage <=1)
        {
            System.out.println("Invalid Input");
        }

        if(BateryPercentage<=5)
        {
            System.out.println("Critical");
        }
        else if(BateryPercentage<=15)
        {
            System.out.println("Low");
        }
        else
        {
            System.out.println("Normal");
        }
        
    }

    

}