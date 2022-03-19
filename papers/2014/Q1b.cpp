#include <iostream>

using namespace std;

int main()
{
    cout << "Enter marks : ";
    int marks;
    cin >> marks;

    if (marks >= 85)
    {
        cout << "A";
    }
    else if (marks >= 75)
    {
        cout << "B";
    }
    else if (marks >= 60)
    {
        cout << "C";
    }
    else if (marks >= 40)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
}