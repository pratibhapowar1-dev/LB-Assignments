import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int AnnualIncome = 0;
        Double TaxPayable = 0.0000;

        System.out.println("Enter Annual Income : ");
        AnnualIncome = sobj.nextInt();

        if(AnnualIncome < 0)
        {
            System.out.println("Income Cannot be negative ");
            return;

        }

        if(AnnualIncome <= 250000)
        {
            System.out.println(" 0% tax");
        }
        else if(AnnualIncome <= 500000 )
        {
            TaxPayable = (AnnualIncome - 250000)*0.05;
        }
        else if(AnnualIncome <=1000000)
        {
            TaxPayable = (250000*0.05) + (AnnualIncome - 500000) *0.20;
        }
        else if(AnnualIncome > 1000000)
        {
            TaxPayable = (250000*0.05) + (500000*0.20) + (AnnualIncome - 1000000)*0.30;
        }

        System.out.println("Annual Income : Rs "+AnnualIncome);
        System.out.println("Total Tax Payablr : Rs "+ TaxPayable);
    }
}