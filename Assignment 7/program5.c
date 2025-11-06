
////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>           //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : It is used to find difference between even factorial and odd factorial 
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 29 Oct 2025
//      
////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iFact1 = 1;  
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iCnt = 0; 
    for(iCnt=1;iCnt<=iNo; iCnt++)
    {
        if(iCnt%2==0)
        {
        iFact1 = iCnt*iFact1;
        }
    }
    return iFact1;
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iFact2 = 1;  
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iCnt = 0; 
    for(iCnt=1;iCnt<=iNo; iCnt++)
    {
        if(iCnt%2!=0)
        {
        iFact2 = iCnt*iFact2;
        }
    }
    return iFact2;
}
int FactorialDiff(int iNo)
{   
   int iEvenFact = 0, iOddFact = 0, iDiff =0;

   iEvenFact = EvenFactorial(iNo);
   iOddFact = OddFactorial(iNo);

   iDiff= iEvenFact-iOddFact;
   return iDiff;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial diffirence is %d",iRet);
    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 5     Output :  -7
//  Input : -5    Output :  -7 
//  Inpur : 10    Output :  2895
//
////////////////////////////////////////////////////////////////////////////////
