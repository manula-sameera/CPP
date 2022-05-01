#include <iostream>

using namespace std;

int main()
{
 //find natural numbers up to n
    int n,sum=0;
    cout << "enter a number: ";
    cin >> n;

    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << "sum of natural numbers up to " << n << " is " << sum << endl;
    return 0;
}