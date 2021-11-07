#include <iostream>

using namespace std;

class student
{
    string name, regno, sem;

public:
    void getval();
    void printval();
    int main();

    // int main()
    // {
    //     // student s1;
    //     getval();
    //     printval();
    //     return 0;
    // }
};

void student::getval()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter reg no : ";
    cin >> regno;
    cout << "Enter semister : ";
    cin >> sem;
}

void student::printval()
{
    cout << "Name : " << name << endl;
    cout << "Reg no : " << regno << endl;
    cout << "Semister : " << sem << endl;
}

int main(){
    student s1;
    s1.getval();
    s1.printval();
}
