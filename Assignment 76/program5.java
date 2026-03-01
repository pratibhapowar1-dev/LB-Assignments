
import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Budget = 0;
        int N = 0;

        System.out.println("Enter Budget : ");
        Budget = sobj.nextInt();

        if(Budget < 0)
        {
            System.out.println("Invalid Budget");
            return;
        }

        System.out.println("Enter number of items : ");
        N = sobj.nextInt();

        if(N < 0)
        {
            System.out.println("Invalid number of items");
            return;
        }

        int Arr[] = new int[N];

        System.out.println("Enter item prices : ");
        for(int i = 0; i < N; i++)
        {
            Arr[i] = sobj.nextInt();

            if(Arr[i] <= 0)
            {
                System.out.println("Invalid price");
                return;
            }
        }

        int count = 0;

        for(int i = 0; i < N; i++)
        {
            if(Budget >= Arr[i])
            {
                Budget = Budget - Arr[i];
                count++;
            }
            else
            {
                break;
            }
        }

        System.out.println("Items Purchased : " + count);
        System.out.println("Remaining Balance : " + Budget);
    }
}