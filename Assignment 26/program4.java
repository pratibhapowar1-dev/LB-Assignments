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
    public void Display(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;
       
         iCount = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           if(iCnt % 2 ==0)
           {
            System.out.print(iCount+"\t*\t");
            iCount++;
           }
           else
           {
            System.out.print("#\t");
            
           }
        }
        System.out.println();    

    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entery point method for the application 
// 
////////////////////////////////////////////////////////////////////////////////
class program4
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
//  Input  : 4
//  Output : #  1   *   #   2   *    #   3   *   #   4   *
//           1  2   3   4   5   6    7   8   9   10  11  12   
//
////////////////////////////////////////////////////////////////////////////////
