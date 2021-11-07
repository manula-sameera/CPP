#include <iostream>


using namespace std;

int main(){
    string stname="manula sameera";

    char chname[50];
    int len=stname.length();//get length of an string

    for (int i = 0; i < len; i++)
    {
        chname[i]=stname[i];
    }
    
    cout<<chname<<endl;

    char aa[50]="name name";
    string bb=aa;
    cout<<bb;
}