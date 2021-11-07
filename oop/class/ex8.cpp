#include <iostream>

using namespace std;

class factorial{
    int num,ans=1;

    public:

    void getnum();
    void calnum();
    void printnum();
};

void factorial::getnum(){
    cout<<"Enter number : ";
    cin>>num;
}

void factorial::calnum(){
    for (int i = 1; i <= num; i++)
    {
        ans =ans*i;
    }
}

void factorial::printnum(){
    cout<<"ans : "<<ans;
}

int main(){
    factorial f1;
    f1.getnum();
    f1.calnum();
    f1.printnum();
}

