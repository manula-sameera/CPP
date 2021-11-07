#include <iostream>
#include <math.h>
using namespace std;


int main() {
   

    cout << "Enter the temp in celcius : ";
    double temp;
    cin>>temp;
    cout<<"This is "<<(temp * 9/5) + 32<<" F \n\n";
    cout << "Enter the legth in meters : ";
    double len;
    cin>> len;
    double in = len *39.37;
    double ft = len *3.281;

    cout<< ft << " feets\n";
    cout<< in << " inches";
    return 0;
}