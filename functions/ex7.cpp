#include <iostream>

using namespace std;

string check_number(int num)
{
    return (num % 2 == 0) ? "Even" : "Odd";
}

int main()
{
    cout << "Enter a number : ";
    int num;
    cin >> num;
    cout << "number is " << check_number(num);
}