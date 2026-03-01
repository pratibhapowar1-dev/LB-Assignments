
import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int Distance = 0;
        double Fare = 50;
        String PeakHour = null;

        System.out.println("Enter Distance in KM : ");
        Distance = sobj.nextInt();

        System.out.println("Is it peak Hour : ");
        PeakHour = sobj.next();

        if(Distance <0)
        {
            System.out.println("Distance Cannot Be Negative");
            return;
        }

        if(Distance<=10)
        {
            Fare = Fare + (Distance*12);
        }
        else if(Distance>10)
        {
            Fare = Fare + (10*12)+((Distance-10)*15);
        }
        
        if(PeakHour.equalsIgnoreCase("Yes"))
        {
            Fare = Fare + (Fare * 0.20);
        }

        System.out.println("Distance : "+Distance+"KM");
        System.out.println("Peak Hour (Yes/No) : "+ PeakHour);
        System.out.println("Total Fare : "+Fare);




        
    }   
}