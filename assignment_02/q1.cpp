#include <iostream>

using namespace std;

string linearSearch(string letter,string arr[],int length){

    string out;
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==letter){
            out = "found in index "+to_string(i)+"";
            break;
        }else{
            out = "Not found"; 
        }
    }
    return out;
}

void getValues(string arr[],int length){

    for (int i = 0; i < length; i++)
    {
       cout<<"Enter data for index "<<i<<" : ";
       cin>>arr[i];
    }
    
}

int main() {
    string arr[5];
    getValues(arr,5);
    cout<<"Enter search key : ";
    string key;
    cin>> key;
    cout<<linearSearch(key,arr,5);
 
    return 0;
}