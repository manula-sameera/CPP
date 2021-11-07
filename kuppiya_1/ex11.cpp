#include <string.h>
#include <iostream>

using namespace std;
void myFunction(); //declaration

int main() {
    myFunction(); //call
    return 0;
}

void myFunction() //definition
{
    cout << "Look mom I \'m using functions"<<endl;
}