import java.util.*; 
public class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        {
            int AvailableStock = 0;
            int RequestedQty = 0;
            int RemainningStock = 0;

            System.out.println(" Enter current stock : ");
            AvailableStock = sobj.nextInt();

            System.out.println("Enter requested quantity :");
            RequestedQty = sobj.nextInt();

            if(AvailableStock < 0 )
            {
                System.out.println("Stock Cannot be negative");
                return;
            }
            if(RequestedQty < 0)
            {
                System.out.println("Requested quantity must be > 0");
            }

            if(RequestedQty > AvailableStock)
            {
                System.out.println("Order Failed : Insufficient Stock ");
            }
            else if(AvailableStock > RequestedQty)
            {
                RemainningStock = AvailableStock - RequestedQty;

                System.out.println(" Order processed Successfuly");
            
                System.out.println(" Remainning Stock : "+RemainningStock);
            }

            if(RemainningStock < 5)
            {
                System.out.println(" Low stock Alert");
            }
            
            sobj.close();

        }
        
    }
    
}