#include <iostream>

using namespace std;

string name="global name";//global

void myfunction(){

    string name="local name"; //local

    cout<<::name;
}

int main() {
    myfunction();

    return 0;
}