#include <iostream>

using namespace std;

class myclass1{
    public:
    void myfunction(); //declartion
};

class myclass2{
    public:
    void myfunction(); //declaration
};

//definition

void myclass1::myfunction(){
    cout<<"function from class1"<<endl;
}

void myclass2::myfunction(){
    cout<<"function from class2"<<endl;
}


int main() {

    myclass1 obj1;
    //object_name.function_name
    obj1.myfunction();

    myclass2 obj2;
    obj2.myfunction();
    return 0;
}