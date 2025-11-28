////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description   : It is used to check small case
//  Input         : character  
//  OutPut        : string 
//  Author        : Pratibha Sagar Pawar
//  Date          : 28 Nov 2025
//      
////////////////////////////////////////////////////////////////////////////////
void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a'&&chDiv<='z')
    {
        chDiv = chDiv-32;
    }
   
    switch(chDiv)
    {
        case 'A' :
        printf("Your exam at 7AM\n");
        break;

        case 'B' :
        printf("Your exam at 8.30AM\n");
        break;

        case 'C' :
        printf("Your exam at 9.20AM\n");
        break;

        case 'D' :
        printf("Your exam at 10.30AM\n");
        break;

        default :
        printf("Invalid Division");
        break;

        
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

    printf("Enter the character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : A    Output : Your exam at 7AM
//  Inpur : B    Output : Your exam at 8.30AM
//
////////////////////////////////////////////////////////////////////////////////
