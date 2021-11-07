#include <iostream>

using namespace std;

struct student
{
    int roll_no;
    string name;
    int phone_number;
};

int main()
{
    student stu[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student " << i + 1 << " roll number :";
        cin >> stu[i].roll_no;
        cout << "Enter student " << i + 1 << " name :";
        cin >> stu[i].name;
        cout << "Enter student " << i + 1 << " phone number :";
        cin >> stu[i].phone_number;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Roll number : " << stu[i].roll_no << endl;
        cout << "name : " << stu[i].name << endl;
        cout << "phone number : " << stu[i].phone_number << endl;
        cout << "--------------------------------" << endl;
    }

    return 0;
}