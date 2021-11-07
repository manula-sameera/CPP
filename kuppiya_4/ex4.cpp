#include <iostream>

using namespace std;

class vehicle{
    public:
        int speed;
        string name;

    void print(){
        cout<<speed<<endl;
        cout<<name<<endl;
        cout<<"-------------------"<<endl;
    }

};

class bus:public vehicle{
    public:
    bus(int speed,string name){
        vehicle::speed=speed;
        vehicle::name=name;

    }
};

class van:public vehicle{
    public:
    van(int speed,string name){
        vehicle::speed=speed;
        vehicle::name=name;


    }

};

class car:public vehicle{
    public:
    car(int speed,string name){
        vehicle::speed=speed;
        vehicle::name=name;


    }
};

int main() {

    bus b1(60,"tata");
    b1.print();
    van v1(140,"nissan");
    v1.print();
    car c1(160,"toyota");
    c1.print();

    return 0;
}