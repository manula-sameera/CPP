#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int base, exponent;
    cout << "Enter base :";
    cin >> base;
    cout << "Enter exponent :";
    cin >> exponent;

    cout << "The result is :" << pow(base, exponent);
}