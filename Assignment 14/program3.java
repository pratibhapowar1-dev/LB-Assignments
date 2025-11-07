class program3
{
    void findFactorial(int num)
    {
        int iFact = 1;
        int iCnt = 0;
        for(iCnt=1; iCnt<=num; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        System.out.println("factorial is : "+iFact);

    }
}
class program
{
    public static void main(String A[])
    {
        program3 obj =  new program3();
        obj.findFactorial(5);
    }
}