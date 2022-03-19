#include <iostream>

using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "# ";
            }
        }
        cout << "\n";
    }
    return 0;
}