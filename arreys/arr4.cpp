#include <iostream>

using namespace std;

int main() {
  
  int numbers[]={5,1,22,11,44};
  int max = numbers[0];
  for (int i = 0; i <5 ; i++){

   if (max<numbers[i]){
     max = numbers[i];
   }
  }
  cout<<max;
  
  return 0;
}
