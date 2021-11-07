#include <iostream>

using namespace std;

int main()
{
    int *p,size;

    cout<<"enter size";
    cin>>size;

    p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i]=rand();
    }

    
    
}