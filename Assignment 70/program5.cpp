#include<iostream>
using namespace std;

int Mult(int iNo)
{
   static int iFact = 1;

   if(iNo != 0)
   {
        iFact = iFact * (iNo%10);
        Mult(iNo/10);
   }
   return iFact; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Mult(iValue);

    cout<<"multiplication is  : "<<iRet;

    return 0;
}

