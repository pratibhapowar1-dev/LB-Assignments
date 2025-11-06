class program4
{
    void findMin(int a,int b,int c)
    {
        if(a<b && a <c)
        {
            System.out.println(" minimum is "+a);
        }
        else if(b<c)
        {
            System.out.println(" minimum is"+b);
        }
        else
        {
            System.out.println(" minimum is"+c);
        }
    }
}
class program
{
    public static void main(String A[])
    {
        program4 obj = new program4();
        obj.findMin(3,7,2);
    }
}