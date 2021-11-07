#include <iostream>
using namespace std;

int main() {
   double val1,val2,val3;

    cout<<"Enter value 1 : ";
    cin>>val1;
    cout<<"Enter value 2 : ";
    cin>>val2;
    bool result;

    if (val1>10 && val1<val2){
       result = true;
    }else{
        result = false;
    }

    cout<<"Result is : "<<std::boolalpha<<result<<endl;

    cout<<"Enter value 3 : ";
    cin>>val3;

    if (val1<10 || val1>val3){
       result = true;
    }else{
        result = false;
    }
    cout<<"Result is : "<< std::boolalpha <<result<<endl;
    
    return 0;
}