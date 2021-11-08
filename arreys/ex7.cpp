#include <iostream>

using namespace std;

void filldata(int arr[],int length){

    for (size_t i = 0; i < length; i++)
    {
        arr[i]=rand();
    }
}

void printdata(int arr[],int length){
    for (size_t i = 0; i < length; i++)
    {
        cout<<"Index "<<i<<" = "<<arr[i]<<endl;
    }
    
}

int main()
{
    int len;
    cout<<"Enter arrey length between 0-100 : ";
    cin>>len;
    int arr[len];

    filldata(arr,len);
    printdata(arr,len);
}