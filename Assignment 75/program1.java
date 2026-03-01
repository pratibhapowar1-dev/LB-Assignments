import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Duration = 0;
        int Fee = 0;

        System.out.println(" Enter the parking hours : ");
        Duration = sobj.nextInt();

        if(Duration<0)
        {
            System.out.println("Hours cannot be negative ");
            return;
        }
        if(Duration<=2)
        {
            Fee = Duration*20;
        }
        else if(Duration<=10)
        {
            Fee = 2*40 + (Duration * 10);
        }
        else if(Duration>10)
        {
            Fee = 2*40 + (Duration * 10) + 50;
        }

        System.out.println("Total parking Duration : "+Duration+"hours");
        System.out.println("Total Parking Fee : "+Fee);

        sobj.close();
            
    }
}