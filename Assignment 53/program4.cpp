////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMin
//  Description   : It is used to check second minimum value
//  Input         : Generic Array
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMin(T *Arr, int iSize)
{
    T min = Arr[0];
    T secondMin = Arr[1];

    if(secondMin < min)
    {
        T temp = min;
        min = secondMin;
        secondMin = temp;
    }

    for(int i = 2; i < iSize; i++)
    {
        if(Arr[i] < min)
        {
            secondMin = min;
            min = Arr[i];
        }
        else if((Arr[i] > min) && (Arr[i] < secondMin))
        {
            secondMin = Arr[i];
        }
    }
    return secondMin;
}


////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

     cout<< "Second Mininum : "<< SecondMin(Arr,5);

     return 0;
}
////////////////////////////////////////////////////////////////////////////////
