#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i == 20)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}