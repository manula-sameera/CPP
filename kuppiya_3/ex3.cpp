#include <iostream>

using namespace std;

class myclass1{
    public:
        string name="name from class 1";
        int age = 35;
};

class myclass2{
    public:
        string name="name from class 2";
        int age = 25;
};

int main() {
    myclass1 ob1;
    cout<<ob1.name<<endl;

    myclass2 ob2;
    cout<<ob2.name<<endl;
    
    ob1.age=45;
    int ans = ob1.age+ob2.age;
    cout<<ans<<endl;
    return 0;
}