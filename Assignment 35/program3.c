////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description   : It is used to chech difference between small and capital character count
//  Input         : character  
//  OutPut        : character 
//  Author        : Pratibha Sagar Pawar
//  Date          : 30 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str >= 'a'&& *str <= 'z')
        {
            iSmall++;
        }
        else if (*str >= ''&& *str <= 'z')
        {
            iCapital++;
        }
        str++;
    }
    return iSmall-iCapital;
}
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

   printf("%d\n",iRet);

    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : MARKnmcvbn    Output :  1
//
////////////////////////////////////////////////////////////////////////////////
