#include <iostream>

using namespace std;

int getmax(int num1,int num2){
    
    return (num1>num2)?num1:num2;
}

int main(){
    cout<<getmax(10,15);
    return 0;
}