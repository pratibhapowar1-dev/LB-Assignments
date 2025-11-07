class program2
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<= n; iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.println(+iCnt);
            }
        }

    }
}
class program
{
    public static void main(String A[])
    {
        program2 obj = new program2();
        obj.printEvenNumbers(20);
    }
}