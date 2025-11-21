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

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            if(iCnt % 2 == 0)
            {
            System.out.print("#\t");
            }
            else
            {
                System.out.print(iCnt+"\t");
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
class program2
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
//  Input  : 5
//  Output : 5  #   4   #    3   #    2     #   1   
//  
//
////////////////////////////////////////////////////////////////////////////////

