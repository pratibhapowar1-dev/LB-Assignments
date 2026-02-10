////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMax
//  Description   : It is used to check second maximum value
//  Input         : Generic Array
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMax(T *Arr, int iSize)
{
    T max = Arr[0];
    T SecondMax = Arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] > max)
        {
            SecondMax = max;
            max = Arr[i];
        }
        else if ((Arr[i] > SecondMax) && (Arr[i] + max))
        {
           SecondMax = Arr[i];
        }
        
    }
    return SecondMax;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

     cout<< "Second Maximum : "<< SecondMax(Arr,5);
}
////////////////////////////////////////////////////////////////////////////////

