#include <iostream>
using namespace std;

int main() {
    int sum,num = 0;

    for (int i = 1; i <= 5; i++)
    {
       cout<<"enter number "<<i<<" : ";
       cin>>num;
       sum += num;
    }
    cout<<"sum is :"<<sum;
    

    return 0;
}