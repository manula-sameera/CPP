#include <iostream>

using namespace std;

int main() {

  int month,day,tdays = 0;

  cout<<"enter month : ";
  cin>>month;
  cout<<"enter day : ";
  cin>>day;

  int months[12] = {31,28,31,30,31,30,31,30,31,30,31,30};

  for (int i = 0; i < month-1; i++)
  {
      tdays = tdays+months[i];
  }
  tdays = tdays+day;
  cout<<"number of days : "<<tdays;
  
  return 0;
}
