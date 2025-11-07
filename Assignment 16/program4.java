class program2
{
    void sumEvenNumbers(int n)
    {
       int evenSum = 0;
       int oddSum = 0;

       while(n!=0)
       {
        int iDigit = n % 10;
        if(iDigit % 2==0)
        {
            evenSum = evenSum+iDigit;
        }
        else
        {
            oddSum = oddSum+iDigit;
        }
        n = n/10;
       }
       System.out.println("Sum of even Digits "+evenSum);
       System.out.println("Sum of odd digits "+oddSum); 


    }
}
class program
{
    public static void main(String A[])
    {
        program2 obj = new program2();
        obj.sumEvenNumbers(123456);
    }
}