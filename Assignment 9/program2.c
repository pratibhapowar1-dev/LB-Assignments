////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>        //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : It is used to Display Even number
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 31 Oct 2025
//      
////////////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart, int iEnd)
{
    
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return ;
    }

    int iCnt = 0;
    for(iCnt = iStart; iCnt<= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
             printf("%d\t",iCnt);
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
    int iValue1 =0,  iValue2 = 0;

    printf("Enter Starting point ");
    scanf("%d",&iValue1);

    printf("Enter Ending point ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;

}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 23 35     Output : 24 26 28 30 32 34
//  Input : 10 18     Output : 10 12 14 16 18
//  Inpur : 10 10     Output : 10
//
////////////////////////////////////////////////////////////////////////////////
