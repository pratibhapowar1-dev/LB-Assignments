////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>        //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description   : It is used to Display all numbers between given range
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 31 Oct 2025
//      
////////////////////////////////////////////////////////////////////////////////
void RangeDisplay(int iStart, int iEnd)
{
    
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return ;
    }

    int iCnt = 0;
    for(iCnt = iStart; iCnt<= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
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

    RangeDisplay(iValue1, iValue2);

    return 0;

}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input :  23 35    Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//  Input :  10 18    Output : 10 11 12 13 14 15 16 17 18 
//  Inpur : -10 2     Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 
//
////////////////////////////////////////////////////////////////////////////////
