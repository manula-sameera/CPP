#include <iostream>

using namespace std;
class point
{
public:
    int x,y;

    void reset(){
        x=0;
        y=0;
    }
    void print(){
        cout<<"y = "<<y<<endl;
        cout<<"x = "<<x<<endl;
        
    }
    void add(point a){
        point c(a.x+x,a.y+y);
        cout<<"answer is :"<<endl;
        c.print();
    }
    point(int a,int b){
        x=a;
        y=b;
    }
};



// Create a header file called myNumbers.h
// Add a class to hold 2 public variables which represent a point (my2Dpoint)
// Add functions to reset(), print() and add(int a, int b) another point 
// Include that header file in main program and create an object 
// Create another point & add to previous point & print results