
////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumOdd
//  Description   : It is used to sum of odd numbers
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////

template <class T>
T SumOdd(T *Arr, int iSize)
{
    T Sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            Sum = Sum + Arr[i];
        }
    }  

    return Sum;
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

    int iRet = SumOdd(Arr, iSize);

    cout<< "Sum of odd elements : " << iRet << "\n";

    delete[] Arr;

    return 0;
}
////////////////////////////////////////////////////////////////////////////////