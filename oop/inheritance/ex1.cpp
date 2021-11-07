#include <iostream>

using namespace std;

class animal{
    public:
    void eat(){
        cout<<"Eat parent \n";
    }
};

class cat: public animal{
    public:

    void eat(){
        cout<<"Eat child \n";
    }
};

int main(){

    cat c1;
    c1.animal::eat();
    return 0;
}