
#include<iostream>  
using namespace std;

void Display(char ch)
{
  
    if(ch <= 'f')
    {
      cout<<ch<<"\t";
      ch++; 
      Display(ch);
    }
   
}

int main()
{
    Display('a');
    
    return 0;
}