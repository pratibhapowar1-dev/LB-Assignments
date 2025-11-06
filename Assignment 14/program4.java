class program4
{
    void reverseNumber(int num)
    {
        int iRev= 0;
        while(num!=0)
        {
            int digit = num % 10;
            iRev = iRev * 10+digit;
            num = num / 10;
        }
        System.out.println("Reversed number is  : "+iRev);

    }
}
class program
{
    public static void main(String A[])
    {
        program4 obj =  new program4();
        obj.reverseNumber(1234);
    }
}