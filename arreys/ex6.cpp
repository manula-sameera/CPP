#include <iostream>

using namespace std;

int * fillData()
{
    //int *arr = new int[10]; //both are ok
    static int arr[10];


    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand();
    }
    return arr;    
}

void printData(int *p, int len){

    for (int i = 0; i < len; i++)
    {
        cout<<"index "<<i<<" = "<<*(p+i)<<endl;
    }
    
}

int main()
{
    int *p;
	p = fillData();
	printData(p, 10);
}