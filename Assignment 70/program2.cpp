#include<iostream>
using namespace std;

int Sum(int iNo)
{
   static int isum = 0;

   if(iNo != 0)
   {
        isum = isum + (iNo%10);
        Sum(iNo/10);

   }
   return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<"summetion is : "<<iRet;

    return 0;
}

