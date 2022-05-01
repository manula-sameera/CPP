#include <iostream>

using namespace std;

class Employee
{
private:
    int Emp_id;
    char Emp_Name[40];
    float Basic_Salary, Gross_Salary, OT_hours;

    void GrossSalary()
    {
        Gross_Salary = Basic_Salary + OT_hours * 1000;
    }

    float NetSalary()
    {
        return Gross_Salary - (Gross_Salary * 0.08);
    }

public:
    void getDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> Emp_id;
        cout << "Enter Employee Name: ";
        cin >> Emp_Name;
        cout << "Enter Basic Salary: ";
        cin >> Basic_Salary;
        cout << "Enter OT Hours: ";
        cin >> OT_hours;
    }

    void displayDetails()
    {
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Employee Name: " << Emp_Name << endl;
        cout << "Basic Salary: " << Basic_Salary << endl;
        cout << "OT Hours: " << OT_hours << endl;
        GrossSalary();
        cout << "Gross Salary: " << Gross_Salary << endl;
        cout << "Net Salary: " << NetSalary() << endl;
    }
};

int main()
{
    Employee e1;
    e1.getDetails();
    e1.displayDetails();

    return 0;
}