////////////////////////////////////////////////////////////////////////////////
//
//  Required Heder Files
//
////////////////////////////////////////////////////////////////////////////////
#include<iostream>               // For Input Output
using namespace std;             //
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AddN
//  Description   : It is used to find Addition of two numbers 
//  Input         : Intiger  
//  OutPut        : Intiger  
//  Author        : Pratibha Sagar Pawar
//  Date          : 22 Jan 2026
//      
////////////////////////////////////////////////////////////////////////////////
template <class T>
T AddN(
                T *Arr,
                int iSize
              )
{
   T isum = 0;

    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        isum = isum + Arr[i];
    }  
    return isum;
}            
////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the application 
// 
////////////////////////////////////////////////////////////////////////////////

int main()
{
   
    int Arr[] = {10,20,30,40,50};
    float brr[] = { 10.0,3.7,9.8,8.7};

    int isum = AddN(Arr,5);
    cout<< isum << " ";

    float fsum = AddN(brr,4);
    cout<<fsum<<" ";

    return 0;


}
//  End of main Function
////////////////////////////////////////////////////////////////////////////////
