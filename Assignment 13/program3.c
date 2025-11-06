////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>      //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description   : It is used to display return the count of digits in between 3 and 7
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 1 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit>3 && iDigit<7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d\n", iRet);

    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 2395    Output : 1
//  Input : 1018    Output : 0
//  Inpur : 4521    Output : 2
//
////////////////////////////////////////////////////////////////////////////////
