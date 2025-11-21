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
        char ch = '\0'; 

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            ch = (char)('A' + iCnt-1);
            System.out.print(ch+"\t");
        }
        System.out.println();    

    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entery point method for the application 
// 
////////////////////////////////////////////////////////////////////////////////
class program1
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
//  Output : A  B   C   D   E
//  
//
////////////////////////////////////////////////////////////////////////////////
