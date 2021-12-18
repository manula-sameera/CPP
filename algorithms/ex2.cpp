#include <iostream>

using namespace std;

const int n = 10;

int arr[n], arr2[n];

void fill()
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        arr2[i] = arr[i];
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " , ";
    }
    cout << endl;
}

void swapNumbers(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    fill();
    print();
    swapNumbers(&arr[5],&arr[2]);
    print();
}