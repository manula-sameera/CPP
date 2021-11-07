#include <iostream>

using namespace std;

class stu{
    public:
    int arr[10]={10,20,30};
    string name,address;

    stu(string name,string address){
        this->name = name;
        this->address = address;
    }

    void print(){
        cout<<name<<endl;
        cout<<address<<endl;
    }

    ~stu(){
        delete arr;
        cout<<"object deleted"<<endl;
    }
};


int main(int argc, char const *argv[])
{
    stu s1("manula","uiw");
    s1.print();
    //cout<<s1.arr[0];
    s1.~stu();
    cout<<s1.arr[0]<<endl;
   // s1.print();

    return 0;
}
