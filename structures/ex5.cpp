#include <iostream>
#include <string.h>

using namespace std;

struct Person
{
    char name[50];
    int age;
    double salary;
};

void showdata(Person p)
{
    cout << "name : " << p.name << endl;
    cout << "age : " << p.age << endl;
    cout << "salary : " << p.salary << endl;
}

int main()
{

    Person p1;
    cout << "Enter name :";
    cin.get(p1.name, 50); //for display spaces
    cout << "Enter age : ";
    cin >> p1.age;
    cout << "enter salary : ";
    cin >> p1.salary;

    showdata(p1);

    return 0;
}