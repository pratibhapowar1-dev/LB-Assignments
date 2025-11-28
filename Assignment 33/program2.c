////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description   : It is used to check character is capital or not 
//  Input         : character  
//  OutPut        : string 
//  Author        : Pratibha Sagar Pawar
//  Date          : 28 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL Chkapital(char ch)
{
    if(ch >= 'A' && ch <='Z')   
    {
        return TRUE;
    }
    else if( ch>='a'&& ch<='z')
    {
        return FALSE;
    }

}

////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital Character");
    }
    else
    {
       printf("it is not a capital character");

    }
    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : A    Output : it is Capital character
//  Inpur : a    Output : it is not a capital character  
//
////////////////////////////////////////////////////////////////////////////////
