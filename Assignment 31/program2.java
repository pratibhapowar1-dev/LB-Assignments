////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////
//
//  Class Name    : class pattern
//  Description   : It is used to Display pattern 
//  Input         : Intiger  
//  OutPut        : Pattern 
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////
class pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
       
            for(i = 1; i<=iRow; i++ )
        {
            for(j = 1; j<=iCol; j++)
            {
                if(j <=iCol - i + 1  )
                {
                    System.out.print("*\t");
                }
                else
                {
                   System.out.print("\t");
                }
        
            }   System.out.println();
        }
        System.out.println();
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entery point method for the application 
// 
////////////////////////////////////////////////////////////////////////////////

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iValue2 = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue1, iValue2);

    }
}
//  End of main method
////////////////////////////////////////////////////////////////////////////////
//
//  Input  : iRow = 4  iCol = 4
//
//  Output :  *    *    *    *
//            *    *    *    
//            *    *        
//            *            
////////////////////////////////////////////////////////////////////////////////


