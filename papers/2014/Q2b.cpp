#include <iostream>

using namespace std;

int main()
{
    int q, r, s;       // declare variables
    int *p1, *p2, *p3; // Declare pointers to int

    p1 = &q;  // Assign the address of the variable q to pointer p1
    *p1 = 20; // Assign a value to where the pointer is pointed to, NOT to the pointer variable itself (to q)
    //q=20
    
    p2 = &r;
    *p2 = 30;
    //r=30
    p3 = &r;
    p2 = &s;
    *p3 = 50;
    //r=50

    p1 = &s;
    p2 = &q;
    *p2 = 40;
    //q=40
    *p1 = 10;
    //s=10

    cout << q << "\n";
    cout << r << "\n";
    cout << s << "\n";

    // cout<<q<<endl;
    // cout<<&q<<endl;
    return 0;
}