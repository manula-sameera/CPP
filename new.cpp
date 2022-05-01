#include <iostream>
#include <iomanip>
#define ABC 50

using namespace std;

int main()
{

    int a = 10; // initialize a
    a = 20;     // assign 20 to a
    long long int c;
    // get variable size
    cout << "size of a is " << sizeof(c) << endl;

    // wchar_t example
    wchar_t wc;
    wc = '*';
    cout << "wc is " << ABC << endl;

    // arithmetic operators
    int a1 = 10;
    int b1 = 20;
    int c1 = a1 + b1;
    cout << "c1 is " << c1 << endl;
    c1 = a1 - b1;
    cout << "c1 is " << c1 << endl;
    c1 = a1 * b1;
    cout << "c1 is " << c1 << endl;
    c1 = a1 / b1;
    cout << "c1 is " << c1 << endl;
    c1 = a1 % b1;
    cout << "c1 is " << c1 << endl;

    // increment and decrement operators
    int d, f, g;
    d = 10;
    cout << "d is " << d++ << endl;
    // comound assignment operators
    f += 10; // f=f+10;
    cout << "f is " << f << endl;
    f -= 5; // f=f-5;
    cout << "f is " << f << endl;
    f *= 5; // f=f*5;
    cout << "f is " << f << endl;
    f /= 5; // f=f/5;
    cout << "f is " << f << endl;

    // relational operators
    int h, i, j;
    h = 10;
    i = 20;
    j = 30;

    // bitwise operators
    a = 5;
    int b = 9;

    // The result is 00000001
    cout << "a = " << a << ","
         << " b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;

    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;

    // The result is 11111010
    cout << "~(" << a << ") = " << (~a) << endl;

    // The result is 00010010
    cout << "b << 1"
         << " = " << (b << 1) << endl;

    // The result is 00000100
    cout << "b >> 1 "
         << "= " << (b >> 1) << endl;

    int mark = 60;

    // pass/fail
    if (mark >= 50)
    {
        cout << "pass" << endl;
    }
    else
    {
        cout << "fail" << endl;
    }

    // grade
    if (mark >= 90)
    {
        cout << "A" << endl;
    }
    else if (mark >= 80)
    {
        cout << "B" << endl;
    }
    else if (mark >= 70)
    {
        cout << "C" << endl;
    }
    else if (mark >= 60)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    // switch
    char grade = 'A';

    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Fair" << endl;
        break;
    case 'D':
        cout << "Poor" << endl;
        break;
    case 'F':
        cout << "Fail" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }

    // switch marks
    int marks = 60;
    switch (marks)
    {
    case (ABC > 90):
        cout << "A" << endl;
        break;
    }

    cout << setw(10)<<setfill('#') << "Hello dawd" << endl;
    cout << setw(20) << "world dwadw" << endl;
    cout<<setprecision(2)<<1.2584854<<endl;

     //while loop
     i = 0;
    // while (i <= 10)
    // {
    //     cout<<"i is "<<i<<endl;
    //     i++;
    // }

    // do while loop
    // i = 50;
    // do
    // {
    //     cout<<"i is "<<i<<endl;
    //     i++;
    // } while (i <= 10);

    // for loop
    part4:
    cout<<"upper part"<<endl;
    // for (int k = 0; k <= 10; k++)
    // {
    //     cout<<"k is "<<k<<endl;
    // }

    //nesterd loop
    // for (int k = 1; k <= 5; k++)
    // {
    //     for (int j = 1; j <= k; j++)
    //     {
    //         cout<<"@";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            goto part4;
        }
        
        cout << "i is " << i << endl;
        
    }
    cout<<"section 1"<<endl;
    part1:
    cout<<"section 2"<<endl;

    //find odd or even
    int num = 0;
    cout<<"enter a number"<<endl;
    cin>>num;
    if (num % 2 == 0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }

    //find character or not
    char ch = 'a';
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<"alphabet"<<endl;
    }
    else
    {
        cout<<"not alphabet"<<endl;
    }

}