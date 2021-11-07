#include <iostream>
using namespace std;

int main() {
    string var1,var2,var3;

    cout<<"Enter variable 1 : ";
    cin>>var1;
    cout<<"Enter variable 2 : ";
    cin>>var2;

    var3= var1;
    var1 = var2;
    var2 = var3;

    cout<<"Variable 1 : "<<var1;
    cout<< "Variable 2 : "<<var2;

    return 0;
}