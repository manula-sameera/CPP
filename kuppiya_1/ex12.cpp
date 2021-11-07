#include <string.h>
#include <iostream>

using namespace std;

string name; //global

void getsum(int num1,int num2){
    int sum=0; //local
    sum=num1+num2;
    cout<<sum<<endl;
    name="abc";
}

int main() {
    
    name="bcd";
    cout<<name;
    getsum(10,20);

    
    return 0;
}