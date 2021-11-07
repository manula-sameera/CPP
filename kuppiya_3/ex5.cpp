#include <iostream>

using namespace std;

class Length{
    private:
        int feet,inches;

    public:
        void setValue(int feet,int inches){
            Length::feet=feet;
            Length::inches=inches;
        }

        void Add(Length l){
            int inches = Length::inches + l.inches;
            int feet = Length::feet + l.feet;
            
            if (inches>12)
            {
               feet = feet + (inches/12);
               inches = inches%12;
            }

            Length::feet=feet;
            Length::inches=inches;
            
        }

        void Sub(Length l){
            int inches = Length::inches - l.inches;
            int feet = Length::feet - l.feet;
            
            if (inches<0)
            {
               inches=inches+12;
               feet=feet-1;
            }
//5-10=-5
            Length::feet=feet;
            Length::inches=inches;
        }

        void Print(){
            cout<<feet<<" feet \n";
            cout<<inches<<" inches \n";
        }
};

int main() {
    Length ob1;
    ob1.setValue(5,10);

    Length ob2;
    ob2.setValue(7,5);
    ob2.Sub(ob1);
    ob2.Print();

    return 0;
}