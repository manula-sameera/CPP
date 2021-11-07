#include <iostream>
using namespace std;

class person{
    public:
        char name[20];
        int age;
};

int main(){

person p1;

std::cout << "Enter name" << std::endl;
cin>>p1.name;
    return 0;
}