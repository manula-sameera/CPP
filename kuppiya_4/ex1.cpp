#include <iostream>

using namespace std;


class vehicle{
    public:
        int speed;
        string name;

        void abc(){

        }
 

    //base,parent
};

class car : public vehicle{
    //derived,child,sub
    public:
    car(){
        speed=50;
    }
 
};

class van{

};

int main()
{
    car c1;
    c1.speed=100;
    c1.abc();

    return 0;
}
