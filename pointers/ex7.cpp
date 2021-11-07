#include <iostream>
using namespace std;

class sum1{
    int num[20];
    int sum=0;

    public:

    void putval(P)

    void getsum(){
        for (int i = 0; i < 20; i++)
        {
            sum+=num[i];
        }
        
    }

    void print(){
        cout<<"sum is : "<<sum;
    }
};

int main(){

    sum1 s1;
    s1.getsum();
    s1.print();
    return 0;
}