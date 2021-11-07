#include <iostream>

using namespace std;

int main() {

    for(int a = 5;a>=1;a--){
        for (int b=1;b<=a;b++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}