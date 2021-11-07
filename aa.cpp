#include <iostream>

using namespace std;

int main(){

    for (int a = 0; a <10; a=a+1)
    {
        for (int i = 0; i < 5; i++)
        {
            if (i==2)
            {
                goto here;
            }
            
            cout<<a;
        }
        cout<<endl;
    }
    
here:

    return 0;
}