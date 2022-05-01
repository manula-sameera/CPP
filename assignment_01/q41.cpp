#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int mt1[4][4];
    int mt2[4][4];
    int ans[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Enter value for arr 1 ["<<i<<"]["<<j<<"] : ";
            cin>>mt1[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Enter value for arr 2 ["<<i<<"]["<<j<<"] : ";
            cin>>mt2[i][j];
        }    
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ans[i][j] = mt1[i][j] + mt2[i][j];
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"answer ["<<i<<"]["<<j<<"] : "<<ans[i][j]<<endl;
        }
        
    }
    
   
    

    return 0;
}