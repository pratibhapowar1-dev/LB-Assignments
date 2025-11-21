////////////////////////////////////////////////////////////////////////////////
//
//  Required Package
//
////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////
//
//  Class Name    : class pattern
//  Description   : It is used to Display pattern 
//  Input         : Intiger  
//  OutPut        : Pattern 
//  Author        : Pratibha Sagar Pawar
//  Date          : 21 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////
class pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch = '\0';

        for(i = 1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                if(i % 2 == 0)
              {
                ch = (char)('a' + j-1);
               System.out.print(ch+"\t");
              }
              else
              {
                ch = (char)('A' + j-1);
               System.out.print(ch+"\t");
              }
              
            }
            System.out.println();
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

        System.out.println("Enter the  number of Row : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Column : ");
        iValue2 = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue1,iValue2);
    }
}
//  End of main method
////////////////////////////////////////////////////////////////////////////////
//
//  Input  : iRow = 4  iCol = 4
//
//  Output : A   B   C   D
//           a   b   c   d
//           A   B   C   D
//           a   b   c   d
//
////////////////////////////////////////////////////////////////////////////////

