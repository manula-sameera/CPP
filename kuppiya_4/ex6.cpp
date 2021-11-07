#include <iostream>

using namespace std;

class A{
    public:
        int age=10;

    // A(){
    //    cout<<age<<endl;  
    // }
};

class B:public A{
    public:
    B(){
        age=50;
        cout<<age<<endl;
    }
};

int main() {

    B b1;
    b1.age=500;

    return 0;
}