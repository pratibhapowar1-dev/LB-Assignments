class program4
{
    void printDigits(int num)
    {
        
       int temp = num;
       int rev = 0;

        while(temp>0)
        {
            rev = rev * 10 + temp % 10;
            temp = temp/10;
        }
        while(rev>0)
        {
            System.out.println(rev%10);
            rev = rev/10;
        }
       

    }
}   
class program
{
    public static void main(String A[])
    {
        program4 obj = new program4();
        obj.printDigits(9876);
    }
}    
