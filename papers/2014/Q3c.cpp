#include <iostream>

using namespace std;

// accepts two numbers as parameters and return the average of the two numbers
double average(int a, int b)
{
    return (a + b) / 2.0;
}

int main()
{
    int a, b;
    cout << "Enter num 1 : ";
    cin >> a;
    cout << "Enter num 2 : ";
    cin >> b;
    cout << "Average :" << average(a, b) << endl;
    return 0;
}