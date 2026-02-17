
#include<iostream>  
using namespace std;

void Display(int ino)
{
  
    if(ino >= 1)
    {
      cout<<ino<<"\t";
      ino--; 
      Display(ino);
    }
   
}

int main()
{
    Display(5);
    
    return 0;
}