////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : checkEqual
//  Description   : It is used to check equal number
//  Input         : Intiger  
//  OutPut        : String
//  Author        : Pratibha Sagar Pawar
//  Date          : 29 Oct 2025
//      
////////////////////////////////////////////////////////////////////////////////
bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }

}
///////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers : \n");
    scanf("%d %d ", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Testcasess successfully handaled by the applications
//  
//  Input : 10 10   Output : equal
//  Input : 10 12   Output : not equal          
//  Inpur : 12 12   Output : equal
//
////////////////////////////////////////////////////////////////////////////////
