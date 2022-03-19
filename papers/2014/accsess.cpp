#include <iostream>

using namespace std;

class A
{

private:
    int num1;
    void func1()
    {
        cout << "This is function 1" << endl;
    }

public:
    int num2;
    void func2()
    {
        cout << "This is function 2" << endl;
    }
};

int main()
{
    //<classname> <objectname>(<parameters>);

    A object1;

    //<objectname>.<functionname>(<parameters>);

    object1.func2();
    object1.num2;
    return 0;
}