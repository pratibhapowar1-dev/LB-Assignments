import java.util.*;

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int units = 0;
        int amount = 0;

        System.out.println("Enter units consumed : ");
        units = sobj.nextInt();

        if(units < 0)
        {
            System.out.println(" Units cannot be negative");
        }

        if(units <= 100)
        {
            amount = units*5;
        }
        else if(units<=200)
        {
            amount = 500+ (units-100)*7;
        }
        else if(units>200)
        {
            amount = 500+700 + (units-200)*10;
        }

        System.out.println("Total units consumed: "+units);
        System.out.println("Total electrycity bill : "+amount);

        sobj.close();


    }
}