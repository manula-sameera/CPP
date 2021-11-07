#include <iostream>

using namespace std;

class grandparent{
    public:
        int age=50;
    

};

class parent: public grandparent{
    public:
        string name="kamal";
};

class kid:public parent{
    public:
    void aa(){
        cout<<age<<endl;
        cout<<name<<endl;
    }
};

int main() {

    kid k1;
    k1.aa();
    return 0;
}