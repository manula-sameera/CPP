#include <iostream>

using namespace std;

void printData(int *p, int len){

    for (int i = 0; i < len; i++)
    {
        cout<<"index "<<i<<" = "<<*(p+i)<<endl;
    }
    
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    printData(arr,5);
}