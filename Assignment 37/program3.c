////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description   : It is used to return first occurance
//  Input         : string 
//  OutPut        : string 
//  Author        : Pratibha Sagar Pawar
//  Date          : 4 Dec 2025
//      
////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)                          

{ 
  int iIndex= 0;
   while(*str != '\0')
    {
      if(*str == ch)
      {
        break;
      }
      iIndex++;
      str++;
    }
    if(*str == '\0')
    {
    return -1;
    }
    else
    {
      return iIndex;
    }
   
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
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("character location is %d",iRet);

    return 0;
}

//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : MARK         A     Output :  1
//  Inpur : MARVELLOUS   R     Output :  2
//
////////////////////////////////////////////////////////////////////////////////
