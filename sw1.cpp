#include <iostream>

using namespace std;

int main()
{
    // bitwise operators
    //  & - AND
    //  | - OR
    //  ^ - XOR
    //  ~ - NOT
    //  << - Left shift
    //  >> - Right shift

    // and operator
    int a = 5;
    int b = 3;
    int c = a ^ b;
    cout << c << endl;

    // << - Left shift
    int d = 5;
    int f = d << 2;
    cout << f << endl;

    // nested if
    int marks;
    cout << "Enter the marks of student:";
    cin >> marks;

    if (marks >= 80)
        cout << " You got 1st class !!";
    else if (marks >= 60)
        cout << "You got 2nd class !!";
    else if (marks >= 40)
        cout << "You are 3rd class !!";
    else
        cout << " You are fail !!";


    // switch case
    char grade;
    cout << "Enter the grade:";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Average";
        break;
    defult :
        cout << "Invalid grade";
        break;
    }
}