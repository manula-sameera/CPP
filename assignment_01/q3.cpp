#include <iostream>

using namespace std;

int main() {

    int units;
    double charge =0;
    cout<<"Enter number of units : ";
    cin>>units;

    if(units<30){
        charge = units*5;
    }else if(units<60){
        charge = 29*5 + (units-29)*20 ;
    }else if(units<120){
        charge = 29*5 + 30*20 + (units-59)*150 ;
    }else if(units<200){
        charge = 29*5 + 30*20 + 60*150 + (units-119)*500;
    }else if(units>=200){
        charge = 29*5 + 30*20 + 60*150 + 80*500 + (units-199)*1000;
    }   
    
    cout<<"Charge : "<<charge<<"/-";

    return 0;
}