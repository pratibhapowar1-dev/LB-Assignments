////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>      //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description   : It is used to count frequency of such a digit which are less than 6  
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 1 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        if (iDigit <= 6)
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

    iRet = Count(iValue);

    printf("Frequency of count is less than 6: %d\n", iRet);

    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 2390      Output : 3
//  Input : 1018      Output : 3
//  Inpur : 966772    Output : 1
//
////////////////////////////////////////////////////////////////////////////////
