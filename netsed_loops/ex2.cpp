#include <iostream>

using namespace std;

int main()
{

    for (int a = 5; a >= 1; a--)//outer
    {
        for (int b = 1; b <= a; b++)//inner
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}