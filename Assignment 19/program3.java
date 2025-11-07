class program3
{
    void DisplayFacter(int num)
    {
     int iCnt = 0;
     for(iCnt = 1; iCnt<=num/2; iCnt++)
     {
        if(num % iCnt==0)
        {
            System.out.println(iCnt);
        }
     }  
    }
}

class program
{
    public static void main(String args[])
    {
        program3 obj = new program3();
        obj.DisplayFacter(12);
    }
}