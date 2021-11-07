#include <iostream>
using namespace std;

class hello{
    public:
        void sayhello(){
            cout<<"Hello world"<<endl;
        }
};

int main() {

    hello h1;
    h1.sayhello();
    return 0;
}