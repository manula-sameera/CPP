#include <iostream>

using namespace std;

void function(int a){
    cout<<"This is A";   
}

void function(int a){

    cout<<"This is B ";
}
void function(){
    cout<<"This is C ";
}

int main() {
    function(10);
    return 0;
}