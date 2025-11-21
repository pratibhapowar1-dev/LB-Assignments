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
//  OutPut        : Intiger 
//  Author        : Pratibha Sagar Pawar
//  Date          : 21 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////
class pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
       
         iCount = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            
            System.out.print(iCnt*2+"\t");

        }
        
        System.out.println();    

    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entery point method for the application 
// 
////////////////////////////////////////////////////////////////////////////////
class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the frequency : ");
        iValue = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue);
    }
}
//  End of main method
////////////////////////////////////////////////////////////////////////////////
//
//  Input  : 8
//  Output : 2  4   6   8   10  12  14  16
//           1  2   3   4   5   6    7   8     
//
////////////////////////////////////////////////////////////////////////////////
