#include <iostream>

using namespace std;

class vehicle{
    public:
        int speed;
        string name;
        int trip;
    void print(){
        cout<<speed<<endl;
        cout<<name<<endl;
        
    }
};

class car:public vehicle{
    public:
    car(){

    }
    car(int speed,string name,int trip){
        vehicle::speed=speed;
        vehicle::name=name;
        vehicle::trip=trip;
    }
};

class van:public vehicle{
    public:
    van(){

    }
    van(int speed,string name,int trip){
        vehicle::speed=speed;
        vehicle::name=name;
        vehicle::trip=trip;
    }
};

class fare :public van,public car{
    public:
        double calfare_car(){
            return car::trip*15.0;
        }
        double calfare_van(){
            return van::trip*20.0;
        }

};

int main()
{
    car c1(160,"toyota",150);
    fare f1;
    c1.print();
    cout<<f1.calfare_car()<<endl;


    van v1(140,"nissan",20);
    fare f2;
    v1.print();
    cout<<f1.calfare_van();
    return 0;
}
