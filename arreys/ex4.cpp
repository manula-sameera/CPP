#include <iostream>

using namespace std;

void testArraySize(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size form function is "<<size;
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5 };

    int size = sizeof(a)/sizeof(a[0]);
    cout<<"size from main is "<<size<<endl;
    testArraySize(a);
}