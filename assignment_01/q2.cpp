#include <iostream>

using namespace std;

int main() {

    double mat1[2][2];
    double mat2[2][2];
    double ans[2][2];

    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
           cout<<"Enter data for matrice 1 ["<<i<<"]["<<j<<"] : ";
           cin>>mat1[i][j];
       }
       
    }

    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
           cout<<"Enter data for matrice 2 ["<<i<<"]["<<j<<"] : ";
           cin>>mat2[i][j];
       }
       
    }

    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
           ans[i][j] = mat1[i][j]+mat2[i][j];
       }      
    }

    cout<<ans[0][0]<<"\t"<<ans[0][1]<<endl;
    cout<<ans[1][0]<<"\t"<<ans[1][1]<<endl;
    

    return 0;
}