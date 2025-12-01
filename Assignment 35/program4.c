////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowels
//  Description   : It is used to chech vowels
//  Input         : character  
//  OutPut        : character 
//  Author        : Pratibha Sagar Pawar
//  Date          : 30 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////
int countvowels(char str[])                          

{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str=='a')|| (*str =='e') ||(*str == 'i')||(*str=='o')||(*str== 'u')||
        (*str=='A')|| (*str =='E') ||(*str == 'I')||(*str=='O')||(*str== 'U') )
        {
          iCount++;
        }

         str++;
    }    
    return iCount;
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter your String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = countvowels(Arr);

    printf("count of vowels is : %d\n",iRet);

    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : MARKnmcvbn  Output :  true
//  Inpur : zxSDFS      Output :  false
//
////////////////////////////////////////////////////////////////////////////////
