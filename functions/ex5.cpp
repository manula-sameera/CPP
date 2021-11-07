#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
float area(int radius) {
   return M_PI * (radius * radius);
}
int main () {
   cout << "Enter radius : ";
   double r;
   cin>>r;
   cout<<"area is : "<<area(r);
   return 0;
}