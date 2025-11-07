class program1
{
    void sumEvenNumber(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt<=n; iCnt++)
        {
            if(iCnt%2==0)
          {
            iSum = iSum + iCnt;
          }
        }
        System.out.println(iSum) ;
    }  

}
class program
{
    public static void main(String A[])
    {
        program1 obj = new program1();
        obj.sumEvenNumber(10);
    }
}