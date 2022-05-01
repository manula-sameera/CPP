#include <iostream>

using namespace std;

int Mul(int a, int b); // function declaration

int main(void)
{
    int z, x, y;
    cout << "Enter x , y";
    cin >> x >> y;
    Mul(x, y); // call
    cout << "Multipication of2 numbersZ=" << z;
    return 0;
}

int Mul(int a, int b) // function intialization
{
    int r = a * b;
    return r;
}