#include<iostream>
#include<stdio.h>
using namespace std;

int strlenX(char*str)
{
   static int icount = 0;

    if (*str != '\0')
    {
       icount++;
       str++;
       strlenX(str);
    }
    return icount;
    
}
int main()
{
    char arr[50] = {'\0'};
    int iret = 0;

    printf("enter string :");
    scanf("%[^'\n']",arr);

    iret = strlenX(arr);
    printf("string length : %d\n",iret);

    return 0;
}