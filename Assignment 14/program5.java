class program5
{
    void coundDigits(int num)
    {
        int iCnt = 0;
        while(num!=0)
        {
            num = num/10;
            iCnt++;
        }
        System.out.println("number of digits  : "+iCnt);

    }
}
class program
{
    public static void main(String A[])
    {
        program5 obj =  new program5();
        obj.coundDigits(7865);
    }
}