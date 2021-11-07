#include <iostream>

using namespace std;

class A{
public:
    int a;
 void run(){
     cout<<"this is from class A\n";
 }
};

class B:public A{
public:
    int b;
    void run(){
        cout<<"this is from class B\n";
    }
};

class C:public B{
    public:
        int c=a+b;
    void run(){
        cout<<"this is class C\n";
    }
};

int main() {
    C obj1;
    obj1.B::run();
    obj1.A::run();
    obj1.run();
    return 0;
}