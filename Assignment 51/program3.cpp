#include<iostream>
using namespace std;

template <class T>
int SerchFirst(T *Arr, int iSize, T iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            return iCnt +1;
        }
        
    }
    return -1;

}

int main()
{
    int Arr[]= {11, 20, 30, 10, 70 , 40, 13 , 43 , 18};
    int iRet = SerchFirst(Arr,9,40);
    cout<<iRet;
    return 0;
}