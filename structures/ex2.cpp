#include <iostream>

using namespace std;

struct student
{
    int RegNo;
    string name;
    int phone_number;
};

int main()
{

    student stu1 = {1, "Brown", 242526}; //first student detia19
    student stu2;                        // second students details
    stu2.RegNo = 2;
    stu2.name = "Smith";
    stu2.phone_number = 2678222;

    return 0;
}