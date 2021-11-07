#include <iostream>

using namespace std;

double add(double a,double b){
    return a+b;
}
double sub(double a,double b){
    return a-b;
}
double mul(double a,double b){
    return a*b;
}
double divide(double a,double b){
    return a/b;
}


int main(){
    cout<<add(10,15)<<endl;
    cout<<sub(10,15)<<endl;
    cout<<mul(10,15)<<endl;
    cout<<divide(10,15)<<endl;
    return 0;
}
