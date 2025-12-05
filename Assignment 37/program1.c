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
//  Function Name : ChkChar
//  Description   : It is used to check given chacracter is present or not 
//  Input         : string 
//  OutPut        : string 
//  Author        : Pratibha Sagar Pawar
//  Date          : 4 Dec 2025
//      
////////////////////////////////////////////////////////////////////////////////
typedef int BOOL;

BOOL ChkChar(char *str, char ch)                          

{ 
   while(*str != '\0')
    {
      if(*str == ch)
      {
        return TRUE;
      }
      str++;
    }
    return FALSE;
   
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}

//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : MARK            Output :  Character is not found
//  Inpur : MARVELLOUS      Output :  charactre is found
//
////////////////////////////////////////////////////////////////////////////////
