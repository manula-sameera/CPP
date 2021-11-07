#include <iostream>
using namespace std;

class Phone
{
public:
    double cost;
    int slots;
};
int main()
{
    Phone Y6;
    Phone Y7;
    Y6.cost = 100.0;
    Y6.slots = 2;
    Y7.cost = 200.0;
    Y7.slots = 2;
    cout << "Cost of Huawei Y6 : " << Y6.cost << endl;
    cout << "Cost of Huawei Y7 : " << Y7.cost << endl;
    cout << "Number of card slots for Huawei Y6 : " << Y6.slots << endl;
    cout << "Number of card slots for Huawei Y7 : " << Y7.slots << endl;
}