#include <iostream>

using namespace std;

struct Customer
{
    int custnum;
    int salary;
    float commission;
};

int main()
{

    Customer cust1;
    cust1.custnum = 100;
    cust1.salary = 20000;
    cust1.commission = 35.5;
    //Customer cust1={100,20000,35.5};

    cout << "Customer Number" << cust1.custnum << endl;
    cout << "Customer Salary:" << cust1.salary << endl;
    cout << "Customer Commision:" << cust1.commission << endl;
    return 0;
}
