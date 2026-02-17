
#include<iostream>  
using namespace std;

void Display(char ch)
{
  
    if(ch <= 'F')
    {
      cout<<ch<<"\t";
      ch++; 
      Display(ch);
    }
   
}

int main()
{
    Display('A');
    
    return 0;
}