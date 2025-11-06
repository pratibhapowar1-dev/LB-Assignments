////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>        //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : It is used to return addition of all even number between given range  
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 29 Oct 2025
//      
////////////////////////////////////////////////////////////////////////////////
int RangeSum(int iStart, int iEnd)
{
    
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return 0;
    }

    int iCnt = 0;
    int iSum = 0;
    for(iCnt = iStart; iCnt<= iEnd ; iCnt++)
    {
        if(iCnt%2==0)
        {
            iSum = iSum +iCnt;
        }
    }
    return iSum;
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 =0,  iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point ");
    scanf("%d",&iValue1);

    printf("Enter Ending point ");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;

}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 23 30   Output : 108
//  Input : 10 18   Output : 70
//  Inpur : -10 2   Output : Invalid Range
//
////////////////////////////////////////////////////////////////////////////////
