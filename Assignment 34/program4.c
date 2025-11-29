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
//  Function Name : ChkSpecial
//  Description   : It is used to check special symbol 
//  Input         : character  
//  OutPut        : character 
//  Author        : Pratibha Sagar Pawar
//  Date          : 29 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch >= 'A' && ch<= 'Z'|| ch >= 'a' && ch<= 'z' || ch >= '0' && ch<= '9')    
    {
        return FALSE;
    }
    else
    {
        return TRUE;
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
       printf("it is not a special character");

    }
    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : A    Output : it is not a special  character
//  Inpur : #    Output : it is a special character  
//
////////////////////////////////////////////////////////////////////////////////
