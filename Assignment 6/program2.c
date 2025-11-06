////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>        //For Input Output
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : It is used to print number into word  
//  Input         : Intiger  
//  OutPut        : string  
//  Author        : Pratibha Sagar Pawar
//  Date          : 29 Oct 2025
//      
////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
   if(iNo<0)
   {
    iNo = -iNo;
   }
   switch (iNo)
   {
   case 0:
    printf("Zero\n");
    break; 
   case 1: 
    printf("one\n");
    break; 
   
   case 2: 
    printf("two\n");
    break; 

   case 3: 
    printf("three\n");
    break; 

   case 4: 
    printf("four\n");
    break; 

   case 5: 
    printf("five\n");
    break; 

   case 6: 
    printf("sixr\n");
    break;  

   case 7: 
    printf("seven\n");
    break; 
    
   case 8: 
    printf("eight\n");
    break;  

   case 9: 
    printf("nine\n");
    break;  

   case 10: 
    printf("ten\n");
    break;  
   default:
   printf("Invalid Number\n");
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
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
//
//  Input : 7    Output : Seven
//  Input : 4    Output : four   
//  Inpur : 2    Output : two
//
////////////////////////////////////////////////////////////////////////////////
