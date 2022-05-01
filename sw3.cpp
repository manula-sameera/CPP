#include <iostream>

using namespace std;

int main()
{
here:
    cout << "here" << endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            goto here;
        }

        cout << i << endl;
    }
point1:
    cout << "point1" << endl;
point2:
    cout << "point2" << endl;

    return 0;
}