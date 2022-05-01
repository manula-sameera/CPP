#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0, 10, -2, 13, 24, 53, 16, -7, -18, 19};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Enter num ";
    //     cin >> arr[i];
    // }

    // sort array descending
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j <= 10; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}