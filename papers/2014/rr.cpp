#include <iostream>

using namespace std;

int main()
{
    int m1[2][2];
    int m2[2][2];

    int ans[2][2];

    //enter values for m1
    cout << "Enter values for m1" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "m1[" << i << "][" << j << "] = ";
            cin >> m1[i][j];
        }
    }

    //enter values for m2
    cout << "Enter values for m2" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "m2[" << i << "][" << j << "] = ";
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ans[i][j]=m1[i][j]-m2[i][j];
        }
        
    }
    
    //printing the result
    cout << "The result is" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}