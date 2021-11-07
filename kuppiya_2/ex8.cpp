#include <iostream>

using namespace std;

double add(int num1,int num2){
    cout<<"F1"<<endl;
    return num1+num2;
}

int add(int num1,int num2,int num3){
    cout<<"F2";
    return num1+num2+num3;
}

double add(double a, double b){
    cout<<"F3"<<endl;
    return a+b;
}

void print_data(){
    cout<<"\nF1"<<endl;
    cout<<"No data"<<endl; 
}

void print_data(string name){
    cout<<"\nF2"<<endl;
    cout<<"Name : "<<name<<endl; 
}
void print_data(string name,int age){
    cout<<"\nF3"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;  
}

void print_data(string name,int age,bool married){
    cout<<"\nF4"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Married : "<<married<<endl;   
}


int main() {
    print_data();
    print_data("Name 1",20,1);
    print_data("Name 2",25);
    print_data("Name 3");
    return 0;
}