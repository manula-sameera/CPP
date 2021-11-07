#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

    char input[100];
    int count = 1;
    cout<<"Enter a word : ";
    cin.getline(input,100);

    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]==' '){
            count++;
        }
    }
    //manula
   cout<<count;
}