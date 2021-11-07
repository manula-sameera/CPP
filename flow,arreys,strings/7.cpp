#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int main(){
    string str;
    locale loc;
    cout<<"Enter long text (separate items by : mark) - ";
    cin>>str;

    
    

    for (int i = 0; i <=str.length(); i++)
    {
        string a = str.substr(0,str.find(":"));

        for (int i = 0; i < a.length(); i++)
        {
            cout<<toupper(a[i],loc);
        }
            cout<<endl;
        str = str.substr(str.find(":")+1);
    }
    
//program is buggy if you enter one letter items Eg a:b:c ()
//only work with two letter words Eg aa:bb:Dd
//but work fine for inputs in the assigment Book:Pen:Pencil:Table:Desk
//can't understand why :(

}