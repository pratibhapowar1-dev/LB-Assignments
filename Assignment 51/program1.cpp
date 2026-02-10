#include<iostream>
using namespace std;

template<class T>

void Dispaly(T value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout<< value<< " "; 
    }
    cout<<"\n";
}

int main()
{
    Dispaly('M',7);
    Dispaly(11,3);
    Dispaly(3.7,6);

    return 0;
}