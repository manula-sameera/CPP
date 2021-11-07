#include <iostream>

using namespace std;

int main() {
  string elements[5] ;

  for (int i = 0; i < 5; i++)
  {
      cout<<"enter value for element "<<i+1<<" of 5 : ";
      cin>>elements[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cout<<elements[i]<<",";
  }
  
  return 0;
}
