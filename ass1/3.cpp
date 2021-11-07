#include <iostream>
using namespace std;

int main() {
    double r;
    const double pi = 3.14159265359;
    cout << "Enter radius : " ;
    cin >> r;
    cout << "area is : "<<pi*r*r<<endl;
    cout << "parameter is : "<<2*pi*r<<endl;
    return 0;
}