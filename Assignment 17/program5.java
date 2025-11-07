class program5
{
    void calculatePower(int base , int exp)
    {
       int result = 1;
       int iCnt = 0;
       for(iCnt=1; iCnt <=exp; iCnt++)
       {
        result = result * base;
       }
       System.out.println(base + "raised to power " + exp + "="+result);
    }
}   
class program
{
    public static void main(String A[])
    {
        program5 obj = new program5();
        obj.calculatePower(2,5);
    }
}    
