class program3
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<= n; iCnt++)
        {
            if(iCnt%2!=0)
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
        program3 obj = new program3();
        obj.printOddNumbers(20);
    }
}