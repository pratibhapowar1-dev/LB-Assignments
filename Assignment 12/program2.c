////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>       //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : BOOL chkZero
//  Description   : It is used to chrck whether it contains 0 in it or not 
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 1 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit =0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit==0)
        {
            return TRUE;
        }
        else
        {
            iNo = iNo/10;
            return FALSE;
        }
    }
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue= 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 725    Output : There is no zero
//  Input : 401    Output : It Contains Zero     
//  Inpur : 212    Output : There is no zero
//
////////////////////////////////////////////////////////////////////////////////
