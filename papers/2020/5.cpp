#include <iostream>

using namespace std;

int main()
{
    // ask user for number
    int num;
    cout << "Enter num ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        int input;
        cout << "Enter input" << endl;
        cin >> input;
        if (input < 0)
        {
            break;
        }
    }
    return 0;
}