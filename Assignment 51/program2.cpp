#include<iostream>
using namespace std;

template <class T>
int Frequency(T *Arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
        
    }
    return iFrequency;

}

int main()
{
    int Arr[]= {10, 20, 30, 10, 30 , 40, 10 , 40 , 10};
    int iRet = Frequency(Arr,9,10);
    cout<<iRet;
    return 0;
}