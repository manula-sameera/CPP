#include <iostream>

using namespace std;

int main(){
    string names[5]; //0,1,2,3,4



    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter value for name "<<i+1<<" : ";
        cin>>names[i];
    }

    for (int a = 0; a < 5; a++)
    {
        cout<<"Name "<<a+1<<" : "<<names[a]<<endl;
    }
    
    
}