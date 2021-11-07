#include <iostream>

using namespace std;

int main() {
  string elements[6]={"aa","bb","cc"} ;

  elements[3] = "dd";
  for (int i = 0; i < 6; i++)
  {
      cout<<elements[i]<<",";
  }
  
  return 0;
}
