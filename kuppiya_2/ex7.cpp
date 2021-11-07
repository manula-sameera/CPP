#include <iostream>

using namespace std;

double FahrenheitToCelsius(double f){
    return (5/9.0)*(f-32);
}

int main() {
    double f;
    cout<<"Enter value in F : ";
    cin>>f;
    cout<<"Value in C : "<<FahrenheitToCelsius(f);
    return 0;
}