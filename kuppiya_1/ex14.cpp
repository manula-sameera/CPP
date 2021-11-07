#include <string.h>
#include <iostream>

using namespace std;

int sum(int num1,int num2);

void printsum(int num1,int num2){
    cout<<sum(num1,num2);
}

int sum(int num1,int num2){
    int ans=num1+num2;
    return ans;
}

int main() {

    printsum(10,20);
    return 0;
}