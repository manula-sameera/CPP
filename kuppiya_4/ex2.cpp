#include <iostream>

using namespace std;

class mom{
    public:
    string color="white";
};

class dad{
    public:
    double welth=50000;
};

class kid:public mom,public dad{
    public:
    kid(){
        cout<<color<<endl;
        cout<<welth<<endl;
    }
};

int main() {

    kid k1;
    return 0;
}