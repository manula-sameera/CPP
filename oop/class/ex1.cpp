#include <iostream>
using namespace std;

class item{
    private:
        int number,cost;
    
    public:
        void getdata(int a, float b);
        void putdata(){
            cout<<"Number : "<<number<<endl;
            cout<<"Cost : "<<cost<<endl;
        }
};

void item::getdata(int a,float b){
    number = a;
    cost = b;
}

int main() {

    item obj1;
    obj1.getdata(100,10.5);
    obj1.putdata();
    return 0;
}