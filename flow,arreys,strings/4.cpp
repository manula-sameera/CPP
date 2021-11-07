#include <iostream>

using namespace std;

int main()
{

    int arr[4][3];
    int count = 0, input, min, max = 0, sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value : ";
            cin >> input;
            if (input == -1)
            {
                goto here;
            }
            else
            {
                arr[i][j] = input;
                count++;
                cout << "count is : " << count << endl;
            }
        }
    }

here:
    min = arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " , ";
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j] && arr[i][j] != 0)
            {
                min = arr[i][j];
            }
            sum += arr[i][j];
        }
    }
    cout << endl;
    cout << "Max is : " << max << endl;
    cout << "min is : " << min << endl;
    cout << "Avarage is : " << (sum / count) * 1.0 << endl;

    return 0;
}