#include <iostream>

using namespace std;

// recursive function
class a
{
public:
    int factorial(int n)
    {
        if (n == 0)
            return 1;
        else
            return n * factorial(n - 1);
    }
};

int main()
{
    a a1; // object of class a
    cout << a1.factorial(6) << endl; // call function

    return 0;
}