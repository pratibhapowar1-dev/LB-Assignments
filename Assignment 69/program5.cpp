#include<iostream>
using namespace std;

void Display(int iNo, char ch = 'a')
{
   
    if(iNo>0)
    {
        cout<< ch<<"\t";
        Display(iNo-1,ch+1);
    
    }
}
int main()
{
    int iValue = 0;
    char ch = '\0';

    cout<<"Enter number :";
    cin>>iValue;

    Display(iValue);

    return 0;
}

