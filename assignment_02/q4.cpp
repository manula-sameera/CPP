#include <iostream>

using namespace std;

double FahrenheitToCelsius(double f){
        double c = (5/9)*(f-32);
        return c;
    }

int main(){

    double c;
    cout<<"Enter temp in F : ";
    cin>>c;
    cout<<"Temp in C : "<<FahrenheitToCelsius(c)<<endl;

    return 0;
}