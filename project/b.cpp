#include <iostream>
#include <algorithm>
using namespace std;

// for std::size_t

int datas[10] = {0};

int ab(int arr[])
{
    int count = 0;
    cout << sizeof(*arr) / sizeof(arr[0]) << endl;
    for (int i = 0; i < sizeof(*arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            count = count + 1;
        }
    }
    return count;
}
int size(int *arr)
{
    return sizeof(*arr);
}

int main()
{

    cout << size(datas) << endl;
    datas[0] = 100;
    datas[1] = 50;
    datas[2] = 50;
    datas[3] = 50;
    datas[4] = 50;
    datas[5] = 50;
    cout << ab(datas);
    // dataSize == 4
}