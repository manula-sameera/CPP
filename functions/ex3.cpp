#include <iostream>

using namespace std;

int input(){
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    return num;
}

void make_table(int num){
    for (int i = 1; i < 13; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }  
}

int main(){
    make_table(input());
    return 0;
}