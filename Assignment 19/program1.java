class program1
{
    void productOfDigits(int num)
    {
       int iproduct = 1, iDigit;

       while(num!=0)
       {
        iDigit = num%10;
        iproduct = iproduct*iDigit;
        num = num/10;

       }
       System.out.println("product of digit"+iproduct);

    }  

}
class program
{
    public static void main(String A[])
    {
        program1 obj = new program1();
        obj.productOfDigits(234);
    }
}   