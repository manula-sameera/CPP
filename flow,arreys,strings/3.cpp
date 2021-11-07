#include <iostream>

using namespace std;

int main(){

    int bday,num,sum=0,sum2 = 0;

    cout<<"Enter Your Birthday (YYYYMMDD) : ";
    cin>>bday;

    while (bday>0)
    {
        num = bday%10;
        sum +=num;
        bday = bday/10;
    }

    while (sum>0)
    {
        num = sum%10;
        sum2 +=num;
        sum = sum/10;
    }

    cout<<"Your lucky number is "<<sum2<<endl;

    return 0;
}