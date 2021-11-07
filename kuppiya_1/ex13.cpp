#include <string.h>
#include <iostream>

using namespace std;

string name="manula"; //golbal

void print(string name="saman",int age=20){
    
    cout<<name<<endl;
    //cout<< ::name;
}

int main(){
    print();
}