#include <iostream>
using namespace std;

int main() {
    int sub1,sub2,sub3;

    cout<<"Enter marks for subject 1 : ";
    cin>>sub1;
    cout<<"Enter marks for subject 2 : ";
    cin>>sub2;
    cout<<"Enter marks for subject 3 : ";
    cin>>sub3;

    cout<<"Total marks : "<<(sub1+sub2+sub3)<<endl;
    cout<<"Avarage marks : "<<(sub1+sub2+sub3)/3.0<<" %";

    return 0;
}