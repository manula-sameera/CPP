#include <iostream>
#define PI 3.14

using namespace std;


double calarea(double radius){   
    return PI*radius*radius;
}
//pi*r*r*h
double calvolume(double height,double radius){

    return calarea(radius)*height;
}

void runner(){
    double h,r;
    cout<<"Enter h : ";
    cin>>h;
    cout<<"Enter r : ";
    cin>>r;

    cout<<"Volume is : "<<calvolume(h,r)<<endl;
    runner();
}



int main() {
    runner();
    return 0;
}