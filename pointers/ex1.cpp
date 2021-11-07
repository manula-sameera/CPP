#include <iostream>

using namespace std;

int main(){
    string a;
    char b[5],*c;
    c=b;
    int val = 5;
    int *ptr = &val;
    int arr[5] = {3,4,5,6};
    int *prtarr = &arr[0];
    int *ptr2 = ptr+1;
    cout<<*ptr2<<endl;
    // cout<<&ptr<<endl; // pointer's address
    // cout<<*ptr<<endl;
    // cout<<prtarr+2<<endl;
    // cout<<*prtarr+2<<endl;

}