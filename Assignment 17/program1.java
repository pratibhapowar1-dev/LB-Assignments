class program1
{
    void checkLeapYear(int year)
    {   
        if(year % 4==0)
        {
            System.out.println("is leap year");
        }
        else
        {
            System.out.println("is not leap year");

        }
       
    }
}   
class program
{
    public static void main(String A[])
    {
        program1 obj = new program1();
        obj.checkLeapYear(2024);
    }
}    
