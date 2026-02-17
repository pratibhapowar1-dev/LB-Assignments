#include<iostream>
using namespace std;

int Fact(int iNo)
{
   static int icnt = 1;
   
   static int iFact = 1; 

   if(icnt<=iNo)
   {
        iFact = iFact * icnt;
        icnt++;
        Fact(iNo);
   }
   return iFact; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"factorial is  : "<<iRet;

    return 0;
}

