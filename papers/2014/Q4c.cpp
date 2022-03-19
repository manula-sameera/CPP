#include <iostream>

using namespace std;

class Circle
{
    int radius;
public:

    Circle(int r); //declare constructor
    float getArea(); //declare function
};

Circle::Circle(int r) //initialize constructor
{
    radius = r;
}

float Circle::getArea() //initialize function
{
    return (22.0 / 7) * radius * radius;
}

int main()
{
    cout << "Enter radius" << endl;
    int r;
    cin >> r;

    Circle c1(r); //cerate object
    cout << "Area of circle is " << c1.getArea() << endl;

    return 0;
}



