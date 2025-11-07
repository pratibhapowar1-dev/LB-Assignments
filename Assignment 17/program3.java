class program3
{
    void checkDivisible(int num)
    {
       if(num%5==0&& num%11==0)
       {
        System.out.println(num+ "is divisible by 5 & 11");
       }
       else
       {
        System.out.println(num+ "is not divisible by 5 & 11");
       }
    }
}   
class program
{
    public static void main(String A[])
    {
        program3 obj = new program3();
        obj.checkDivisible(55);
    }
}    
