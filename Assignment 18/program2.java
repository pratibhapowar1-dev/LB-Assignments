class program2
{
    void printReverse(int n)
    {
        int iCnt = 0;

        for(iCnt = n; iCnt>=1; iCnt--)
        {
           System.out.println(iCnt) ;
        }
        
    }  

}
class program
{
    public static void main(String A[])
    {
        program2 obj = new program2();
        obj.printReverse(10);
    }
}