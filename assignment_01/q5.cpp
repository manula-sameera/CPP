#include <iostream>

using namespace std;

int main() {
    int num;
    do
    {
        cout<<"Enter a number 1-15 : ";
        cin>>num;
    } while (!(num>0 && num<16));

    for (int i = 1; i <=12 ; i++)
    {
        cout<<i<<" x "<<num<<" = "<<i*num<<endl;
        cout<<(num==i)?"true":"false";
    }
    return 0;
}