#include<iostream>
using namespace std;

template <class T>
int Reverse(T *Arr, int iSize)
{
    int start = 0;
    int end = iSize-1;
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

int main()
{
    int Arr[]= {11, 20, 30, 10, 70 , 40, 13 , 43 , 18};
    
    for(int i = 0; i<9; i++)
    {
        cout<<Arr[i] << " ";
    }
    Reverse(Arr,9);

    for(int i = 0; i<9; i++)
    {
        cout<<Arr[i]<< " ";
    }
    return 0;
}