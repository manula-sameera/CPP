#include <iostream>
#define PI 3.14


using namespace std;
void loop();
double calarea(double radius){
    
    return PI*radius*radius; 
}
//pi*r^2*h
double calcilindervolume(double height,double radius){
    return calarea(radius)*height;
}

void runner(){
   double height,radius;
   cout<<"Enter h :";
   cin>>height;
   cout<<"Enter r : ";
   cin>>radius;
   double ans = calcilindervolume(height,radius);
   cout<<"Volume is :"<<ans<<endl;
   loop();
   //runner();
}

void loop(){
    runner();
}


int main() {
    runner();
    return 0;
}