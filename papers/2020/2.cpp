#include <iostream>

using namespace std;

class parent
{
    int a;
private:
    string nic;
public:
    string address;
    //ptinting the name and age
    void print()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        a = 10;
    }
    void abc(){
        a=10;
    }
protected:
    string name;
    int age;
};

class child : public parent
{
public:
    child(string n, int a)
    {
        name = n;
        age = a;
    }
};
int main()
{
    child obj("sachin", 20);
    obj.print();
};