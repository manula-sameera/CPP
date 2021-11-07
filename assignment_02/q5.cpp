#include <iostream>

double lbTokg(double lb){

    return lb/2.205;

}
using namespace std;

int main(){

    double lb;
    cout<<"Enter weight in pounds : ";
    cin>>lb;
    cout<<"Weight in Kg : "<<lbTokg(lb);

    return 0;
}