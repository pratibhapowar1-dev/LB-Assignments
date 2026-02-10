////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Search
//  Description   : It is used to search a value in array
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////

template <class T>
bool Search(T *Arr, int iSize, T Value)
{
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            return true;
        }
    }  
    return false;
}            

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iValue = 0;

    cout<<"Enter number of elements : ";
    cin>>iSize;

    int *Arr = new int[iSize];   // dynamic array

    cout<<"Enter elements : \n";
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }

    cout<< "Enter value to search : ";
    cin >> iValue;

    bool bRet = Search(Arr, iSize, iValue);

    if(bRet == true)
    {
        cout<< "Value found in array\n";
    }
    else
    {
        cout<< "Value not found in array\n";
    }

    delete[] Arr;   // free memory

    return 0;
}
////////////////////////////////////////////////////////////////////////////////

