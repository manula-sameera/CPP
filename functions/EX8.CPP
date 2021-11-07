#include <iostream>

using namespace std;

void add();
void aa();

void repeat()
{
    add();
}

void add()
{
    int num1, num2;
    cout << "Enter num 1 : ";
    cin >> num1;
    cout << "Enter num 2 : ";
    cin >> num2;
    cout << "ans = " << num1 + num2 << endl;
    repeat();
}

int main()
{
    repeat();
}