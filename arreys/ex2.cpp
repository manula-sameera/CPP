#include <iostream>

using namespace std;

int main()
{
    int num[100];
    for (size_t i = 0; i < 100; i++)
    {
        num[i]=rand()%50;
    }

    for (size_t i = 0; i < 100; i++)
    {
        cout<<num[i]<<endl;
    }
    
    
}
