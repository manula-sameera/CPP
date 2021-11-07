#include <iostream>


using namespace std;

class Length {
public:

int feet;
int inches;

void setValues(int feet, int inches){
    this->feet = feet;
    this->inches = inches;
}
void Add(Length l){
   this->feet = this->feet + l.feet;
   this->inches = this->inches+ l.inches;
}
void Sub(Length l){
   this->feet = this->feet - l.feet;
   this->inches = this->inches- l.inches;
}
void Print(){
    cout<<feet<<" ft."<<endl;
    cout<<inches<<" in."<<endl;
}

    
};

int main(){

    Length l1;
    l1.setValues(2,5);

    Length l2;
    l2.setValues(5,10);
    l2.Sub(l1);
    l2.Print();

    return 0;
}