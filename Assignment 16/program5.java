class program5
{
    void checkSign(int num)
    {
        if(num>0)
        {
            System.out.println("number is positive");
        }
        else if(num<0)
        {
            System.out.println("number is nigative");   
        }
        else
        {
            System.out.println("number zero");
        }
    }
}   
class program
{
    public static void main(String A[])
    {
        program5 obj = new program5();
        obj.checkSign(-8);
    }
}    
