#include <iostream>

using namespace std;

int main()
{

    char arr[5][10] = {"Yamaha", "Honda", "Benz", "Tata", "Suzuki"};

    cout << "chArray = " << addressof(arr) << endl;
    cout<<"chArray = " <<arr<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "chArray[" << i << "] = " << arr[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; arr[i][j] != '\0'; j++)
        {
            cout << "chArray[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
    return 0;
}
