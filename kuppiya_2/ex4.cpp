#include <iostream>

using namespace std;

void myfunction(string name="defult name"){
    cout<<name;
}

int main() {
    myfunction();

    return 0;
}