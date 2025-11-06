class program1
{
    void sumOfDigits(int num)
    {
        int isum = 0;
        while(num!=0)
        {
            isum = isum + (num %10);
            num = num/10;
        }
       
        System.out.println("sumation is : "+isum);

    }
}
class program
{
    public static void main(String A[])
    {
        program1 obj =  new program1();
        obj.sumOfDigits(1234);
    }
}