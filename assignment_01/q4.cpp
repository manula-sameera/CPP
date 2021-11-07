#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
    bool check = true;

    double num1,num2;
    string ope,input;

    cout<<"looped calculator press q to quit anytime"<<endl;

     cout<<"Enter operation +,-,/,* : ";
        cin>>input;
        if(input == "q"){
           return 0;
        }else{
            ope = input;   
        }


    while (check == true)
    {
        cout<<"Enter number 1 : ";
        cin>>input;
        if(input == "q"){
            return 0;
        }else{
            num1 =  stod(input);
        }

        cout<<"Enter number 2 : ";
        cin>>input;
        if(input == "q"){
            return 0;
        }else{
            num2 =  stod(input);
        }
        if (ope == "+")
            {
                cout<<"ans = "<<num1+num2<<endl;
            }else if(ope =="-"){
                cout<<"ans = "<<num1-num2<<endl;
            }else if(ope =="/"){
                cout<<"ans = "<<num1/num2<<endl;
            }else if(ope =="*"){
                cout<<"ans = "<<num1*num2<<endl;
            }
    }
    

    return 0;
}