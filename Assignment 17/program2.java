class program2
{
    void DisplayGrade(int marks)
    {
        if(marks>=90)
        {
            System.out.println("Gread : A");
        }
         else if(marks>=75)
        {
            System.out.println("Gread : B");
        }
         else if(marks>=60)
        {
            System.out.println("Gread : C");
        }
         else if(marks>=35)
        {
            System.out.println("Gread : fail");
        }

       
    }
}   
class program
{
    public static void main(String A[])
    {
        program2 obj = new program2();
        obj.DisplayGrade(82);
    }
}    
