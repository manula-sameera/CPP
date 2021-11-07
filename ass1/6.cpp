#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;
    num+=10;
    num/=3;
    num%=5;
    num*=5;
    cout<<"Ans is : "<<num;

    return 0;
}