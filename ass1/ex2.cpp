#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
   int num  = 1;
    
    cout<<left<<setw(10)<<"number";
    cout<<left<<setw(10)<<"sqrt";
    cout<<left<<setw(10)<<"power";
    cout<<endl;

   do
   {
      cout<<left<<setw(10)<<num;
      cout<<left<<setw(10)<<std::setprecision(3)<<sqrt(num);
      cout<<left<<setw(10)<<pow(num,2);
      cout<<endl;
      num++;
   } while (num <=10);
    
    return 0;
}