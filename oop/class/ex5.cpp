#include <iostream>
using namespace std;

class c1
{
    int a, b;

public:
    void asign()
    {
        a = 20;
        b = 30;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    c1 obj;
    obj.asign();
    obj.display();
}