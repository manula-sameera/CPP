#include <iostream>

using namespace std;

void add(int num1,int num2){
    cout<<num1+num2<<endl;
}

void name(string nm,int age){
    cout<<nm<<endl;
    cout<<age<<endl;
}

int main() {
    int aa=30;

    add(10,20);
    add(aa,50);
    name("name 1",10);
    return 0;
}