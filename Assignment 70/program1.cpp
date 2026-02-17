#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo>=1)
    {
        cout<< iNo << "\t"<<"* \t";
        Display(iNo-1);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}

