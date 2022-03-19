#include <iostream>

using namespace std;

class apple
{
public:
    void getPrice();
    void getColor();
};

int main()
{
    apple a1;
}

void apple::getPrice(){
    cout<<"apple price is 100";
}

void apple::getColor(){
    cout<<"apple color is red";
}
