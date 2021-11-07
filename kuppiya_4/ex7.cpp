#include <iostream>

using namespace std;

void aa(int a,double b){
    cout<<"f1";
}

void aa(double a,double b){
    cout<<"f2";
}

int main() {
    aa(10.0,10.0);

    return 0;
}