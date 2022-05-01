#include <iostream>

using namespace std;

int main()
{
int num = 20;
int *p;
cout<<num<<endl;

//
cout<<&num<<endl;
p = &num;

cout<<*p<<endl;

return 0;

}