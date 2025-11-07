class program2
{
    void checkPalindrome(int num)
    {
        int temp = num;
        int rev = 0;
        while(num!=0)
        {
            rev = rev*10 + num%10;
            num = num/10;
        }
        if(temp==rev)
        {
            System.out.println("is palindrome");
        }
        else
        {
           System.out.println("is not palindrome");   
        }
        
    }
}
class program
{
    public static void main(String A[])
    {
        program2 obj =  new program2();
        obj.checkPalindrome(121);
    }
}