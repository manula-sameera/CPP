#include <iostream>

using namespace std;

int main() {

    for(int a = 0;a<=5;a++){

        for (int b=1;b<=a;b++){
            cout<<"*";
        }
        for (int b=a;b<=5;b--){
            cout<<"*";
        }
        
        cout<<endl;
    }

    return 0;
}