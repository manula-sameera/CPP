#include <iostream>

using namespace std;

void myfunction(); //decration


int main() {
    myfunction(); //call

    return 0;
}

void myfunction(){ //definition
    cout << "Look mom I’m using functions"<<endl;
}