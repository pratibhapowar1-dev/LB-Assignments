import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println(" Please Enter your curent balance  : ");
        int current_Balance = sobj.nextInt();

        System.out.println("Please enter the amount that you what to withtdrow : ");
        int withtdrow_Amount = sobj.nextInt();

        if(current_Balance < 0 || withtdrow_Amount<= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(withtdrow_Amount % 100 != 0)
        {
            System.out.println("Transaction Failed : Withdrowal amount must be muliple of Rs.100");
        }
        else if(withtdrow_Amount >= 25000)
        {
            System.out.println("Trasaction failed : Maximum withdrow per trasaction is Rs.25,000");
        }
        else if(current_Balance - withtdrow_Amount < 1000 )
        {
             System.out.println("Trasaction failed : After withdrowal, balance must remain at least Rs.1,000");
        }
        else
        {
            System.out.println("Transaction successful : ");
            System.out.println("Remaining balance : "+(current_Balance-withtdrow_Amount));
        }
    


    }

}
