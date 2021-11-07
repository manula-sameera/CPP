#include <iostream>
using namespace std;

class calc{
    int num1,num2;

    public:
    void getval(){
        cout<<"Enter num 1 : ";
        cin>>num1;
        cout<<"Enter num 2 : ";
        cin>>num2;
    }

    int calval(){
        return num1+num2;
    }

    void printval(){
        cout<<"sum is : "<<calval();
    }
};

int main(){

    calc c1;
    c1.getval();
    c1.printval();
    return 0 ;
}

