#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = 1;

    //(2^n)-1

    for (int num = 0; num < 2047; n++)
    {
        num = pow(2, n) - 1;
        cout << num << " ";
    }

    return 0;
}