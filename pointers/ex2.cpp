#include <iostream>

using namespace std;

int main(){

    char a[5] = {'5','6','7','8'},*b;

    char *c= a;
    b = a;

    try
    {
        int d;
        cin>>d;
        cout<<d+10;
    }
    catch(exception e)
    {
       cerr << e.what() << '\n';
    }
    

    // cout<<b<<endl;
    // cout<<c;

    while (*b != '\0')
    {
        cout<<*b<<endl;
        b++;
    }
    

    return 0;
}