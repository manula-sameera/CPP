#include <iostream>

using namespace std;

class student
{
public:
    string name,address;
    int age;

    student(string a,string b,int c){
        name = a;
        address = b;
        age = c;
    }
 
};

int main() {

    student s1("manula","Kegalle",25);
    student s2("sameera","Kegalle",25);

    cout<<s1.name<<endl;
    cout<<s2.name<<endl;

    return 0;
}