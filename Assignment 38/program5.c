////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCypToggle
//  Description   : It is used to toggle the character
//  Input         : character  
//  OutPut        : character 
//  Author        : Pratibha Sagar Pawar
//  Date          : 5 dec 2025
//      
////////////////////////////////////////////////////////////////////////////////
void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;   
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;   
        }
        else
        {
            *dest = *src;        
        }
        src++;
        dest++;
    }
    *dest = '\0';                
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];        

    StrCpyToggle(arr, brr);

    printf("%s", brr);   

    return 0;

}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : Marvellous PYTHON    Output :  mARVELLOUS python  
//  
////////////////////////////////////////////////////////////////////////////////
