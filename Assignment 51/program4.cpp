#include<iostream>
using namespace std;

template <class T>
int SerchLast(T *Arr, int iSize, T iNo)
{
    int iCnt = 0;
    int ipos = -1;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            return iCnt +1;
        }
    }
    return ipos;

}

int main()
{
    int Arr[]= {11, 20, 30, 10, 70 , 40, 13 , 43 , 18};
    int iRet = SerchLast(Arr,9,40);
    cout<<iRet;
    return 0;
}