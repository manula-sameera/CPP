#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // iomanip
    //  setw(int) - set minimum width
    //  setprecision(int) - set precision
    //  setfill(char) - set fill character

    cout << setprecision(4) << 12.456 << endl;
    cout << setw(10) << setfill('$') << 12.456 << endl;
}