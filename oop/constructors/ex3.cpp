#include <iostream>

using namespace std;

class stu{
    public:
        int a,b;
    stu(int a){
        this->a=a;
    }
    stu(const stu &c1){
        this->a = c1.a;
    }
};

int main()
{
   stu s1(10);
   stu s2(s1); //copy construct method 1
   stu s3 = s1; //copy construct method 2
   cout<<s1.a<<endl;
   cout<<s2.a<<endl;
   cout<<s3.a<<endl;
    return 0;
}
