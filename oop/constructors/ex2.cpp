#include <iostream>

using namespace std;

class student
{
private:
    string id,name,digree;
public:
    student(string id,string name,string digree){
        this->id= id;
        this->name = name;
        this->digree = digree;
    }

    void printdata(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Digree : "<<digree<<endl;
    }
};

int main() {

    student s1("SOF/20/B1/10","manula","Software Technology");
    s1.printdata(); 

    return 0;
}