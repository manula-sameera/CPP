#include <iostream>

using namespace std;

int main(){
    string names[5]={"aa","bb","cc"};
    int age[5]={10,15,20}; //10,15,20,null,25

    //cout<<"Name 2 : "<<names[1]<<endl;
    //cout<<"age 2 : "<<age[1]+age[2]<<endl;

    string name1= names[0];

   // cout<<"Name 1 :"<<name1<<endl;

    //insert data
    names[4] = "dd";

    //cout<<"Name 5 : "<<names[4]<<endl;

    age[4]=25;

    //cout<<"Age 5 : "<<age[4]<<endl;
    //update data

    names[0]="aaaaa";
    //cout<<"Names 1 : "<<names[0]<<endl;

    int numbers[5]={20,10,30,40,50};

    //int sum= numbers[0]+numbers[1]...
    //sum of an a
    int sum=0;
    for (int i = 0; i < 5; i++)//
    {
       sum=sum+numbers[i];
    }
    cout<<"Sum : "<<sum<<endl;

    //min value
    int min=numbers[0];
    for (int a = 0; a < 5; a++)
    {
        if (min<numbers[a])
        {
         
        }else{
            min=numbers[a];
        }    
    }
    cout<<"Min : "<<min<<endl;

    //max
    int max=numbers[0];
    for (int b = 0; b<5; b++)
    {
        if (max<numbers[b])
        {
            max=numbers[b];
        }
        
    }
    cout<<"Max : "<<max<<endl;


}