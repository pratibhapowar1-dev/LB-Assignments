class program1
{
    void calculateSum(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt<=n; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        System.out.println("Sum of first "+ n + "natural numbers is :" + iSum) ;
    }  

}
class Program
{
    public static void main(String A[])
    {
        program1 obj = new program1();
        obj.calculateSum(10);
    }
}