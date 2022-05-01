#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "enter number of rows : ";
    cin >> x;

    for (int a = 0; a < x; a++)
    {
        for (int i = 0; i <= a; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}