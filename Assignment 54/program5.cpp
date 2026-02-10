////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Min
//  Description   : It is used to find smallest element
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////

template <class T>
T Min(T *Arr, int iSize)
{
    T MinValue = Arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] < MinValue)
        {
            MinValue = Arr[i];
        }
    }

    return MinValue;   // ✅ return AFTER loop
}            

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;

    cout << "Enter number of elements : ";
    cin >> iSize;

    int *Arr = new int[iSize];

    cout << "Enter elements : \n";
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }

    cout << "Smallest element : " << Min(Arr, iSize) << "\n";

    delete[] Arr;

    return 0;
}
////////////////////////////////////////////////////////////////////////////////
