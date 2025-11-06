class program2
{
    void checkEvenOdd(int num)
    {
       
         if(num%2==0)
      {
         System.out.println("Number is Even");
      }
       else
      {
          System.out.println("Number is Odd");

      }
        
    }
}
class program
{
    public static void main(String A [])
    {
        program2 obj = new program2();
        obj.checkEvenOdd(7);
    }
}