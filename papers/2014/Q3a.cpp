#include <iostream>

using namespace std;

// calcluate dispacement
double CalDisplacement(double u, double a, double t)
{
    return u * t + 0.5 * a * t * t;
}

int main()
{
    cout << "Enter velocity" << endl;
    double u;
    cin >> u;
    cout << "Enter acceleration" << endl;
    double a;
    cin >> a;
    cout << "Enter time" << endl;
    double t;
    cin >> t;
    cout << "Displacement is " << CalDisplacement(u, a, t) << endl;
}