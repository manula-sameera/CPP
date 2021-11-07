#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double b1_w,b1_h,b1_l;
    double b2_w,b2_h,b2_l;
    double b1_v,b2_v;

    cout<<"Enter width for small box : ";
    cin >>b1_w;
    cout<<"Enter height for small box : ";
    cin >>b1_h;
    cout<<"Enter lenth for small box : ";
    cin >>b1_l;
    b1_v = b1_w*b1_h*b1_l;
    cout<<"Volume of small box is : "<<b1_v<<endl;

    cout<<"Enter width for big box : ";
    cin >>b2_w;
    cout<<"Enter height for big box : ";
    cin >>b2_h;
    cout<<"Enter lenth for big box : ";
    cin >>b2_l;
    b2_v = b2_w*b2_h*b2_l;

    cout<<floor(b2_v/b1_v)<<" small boxes can put in big box";
    return 0;
}