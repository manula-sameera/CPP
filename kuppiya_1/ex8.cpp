#include <iostream>

using namespace std;

int main(){
    char bday[8];

    cout<<"Enter birthday : ";
    cin.getline(bday,9);
    
    int sum=0,sum2=0;
    for (int i = 0; bday[i] !='\0'; i++)
    {
        sum=sum+bday[i];
    }
    cout<<sum<<endl;
    char arr1[to_string(sum).length()];
    for (int i = 0;i<to_string(sum).length() ; i++)
    {
        arr1[i]=to_string(sum)[i];
    }
    cout<<arr1<<endl;
    for (int i = 0; arr1[i] !='\0'; i++)
    {
        sum2=sum2+bday[i];
    }
    cout<<sum2;
}