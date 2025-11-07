class program3
{
    void checkPerfect(int num)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt<num; iCnt++)
        {
            if(num % iCnt == 0)
          {
            iSum = iSum + iCnt;
          }
        }
        if(iSum==num)
       {
         System.out.println(num+ "is a perfect number") ;
       }
       else
       {
        System.out.println(num+ "is not perfect number") ;
       }
        
    }  

}
class program
{
    public static void main(String A[])
    {
        program3 obj = new program3();
        obj.checkPerfect(6);
    }
}