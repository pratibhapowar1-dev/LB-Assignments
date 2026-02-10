
////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description   : It is used to reverse the array
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *Arr, int iSize)
{
   int start = 0;
   int end = iSize -1;
   T temp;

   while (start < end)
   {
     temp = Arr[start];
     Arr[start] = Arr[end];
     Arr[end] = temp;

     start++;
     end--;
   }
   
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

    Reverse(Arr, iSize);

    cout<< "Array after reverse : \n";
    
    for(int i = 0; i < iSize; i++)
    {
        cout<< Arr[i]<< " ";
    }
    cout << "\n";
        

    return 0;
}
////////////////////////////////////////////////////////////////////////////////