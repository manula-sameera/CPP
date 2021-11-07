#include <iostream>
using namespace std;

class age{
    int age;
    string name;

    public:
    void printage();

    void getage(string a,int b){
        name = a;
        age = b;
    }
};

void age::printage(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

int main(){

    age o1;
    o1.getage("manula",25);
    o1.printage();
    return 0;
}