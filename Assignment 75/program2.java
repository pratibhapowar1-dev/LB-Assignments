import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Age = 0;
        int MounthlyIncome = 0;
        int CreditScore = 0;
        String Lone = null;

        System.out.println("Enter Age : ");
        Age  = sobj.nextInt();

        System.out.println("Monthly Income : ");
        MounthlyIncome = sobj.nextInt();

        System.out.println("Credit Score : ");
        CreditScore = sobj.nextInt();

        System.out.println("Existing unpaid loan (Yes/No) : ");
        Lone = sobj.next();

        if((Age < 0) || (MounthlyIncome < 0) || (CreditScore < 0))
        {
            System.out.println("Age / Income / Score must be non negative");
            return;
        }

        if(Age <21 || Age >60)
        {
            System.out.println("Lone Rejected :  Invalid Age ");
        }
        else if(MounthlyIncome<25000)
        {
            System.out.println("Lone Rejected : Invalid Income");
        }
        else if(CreditScore <700)
        {
            System.out.println("Lone Rejected : Invalid Creadit score ");
        }
        else if(Lone.equalsIgnoreCase("Yes"))
        {
            System.out.println("Lone Rejected : unpaid lone  ");
        }
        else
        {
            System.out.println("Lone Approved");
        }



    }
}