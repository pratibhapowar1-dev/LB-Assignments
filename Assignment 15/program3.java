class program3
{
    void findMax(int a,int b)
    {
        if(a>b)
        {
            System.out.println("is maximum"+a);
        }
        else
        {
            System.out.println("is maximum "+b);
        }
    }
}
class program
{
    public static void main(String A[])
    {
        program3 obj = new program3();
        obj.findMax(10,20);
    }
}