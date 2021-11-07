#include <iostream>

using namespace std;

double FahrenheitToCelsius(double f){
    return (5/9.0)*(f-32);
}

int main() {
    double f;
    cout<<"Enter F :";
    cin>>f;

    cout<<"C : "<<FahrenheitToCelsius(f);
    return 0;
}