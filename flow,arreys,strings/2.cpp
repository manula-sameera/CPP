#include <iostream>

using namespace std;

int main(){

    int input,count=0,sum=0,min,max;
    
    do
    {
       cout<<"Enter a positive number : ";
       cin>>input;
       if (input==0)
       {
           break;
       }
       if (!(input>0))
       {
           cout<<"Invalid number"<<endl;
           continue;
       }else{
           count++;
           if (count==1)
           {
               min=input;
               max=input;
           }
           
           sum +=input;
           if (max<input)
           {    
               max = input;
           }
           if (min>input)
           {
               min=input;
           } 
       }
       
    } while (true);

    cout<<"Count : "<<count<<endl;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Min :" <<min<<endl;
    cout<<"Max : "<<max<<endl;
    return 0;
}