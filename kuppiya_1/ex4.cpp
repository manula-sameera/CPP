#include <iostream>

using namespace std;

int main(){
                            //1 = {5,10,15,20}
                            //2  = {4,8,12,16}+
                            //3 = {9,18,27,36}

    int arr1[2][2]={5,10,15,20};
    int arr2[2][2]={4,8,12,16};
    int ans[2][2];
    //int aa[2][2][2][2][2][2]....
    //int abc[2][2][3];

    // ans[0][0]=arr1[0][0]+arr2[0][0];
    // ans[0][1]=arr1[0][1]+arr2[0][1];
    // ans[1][0]=arr1[1][0]+arr2[1][0];
    // ans[1][1]=arr1[1][1]+arr2[1][1];



    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
           ans[i][j]=arr1[i][j]+arr2[i][j];
       }
       
    }

    for (int i = 0; i < 2; i++)//rows
   {
       for (int j = 0; j < 2 ; j++)//column
       {
           cout<<"answer ["<<i<<"]["<<j<<"] : "<<ans[i][j]<<endl;
       }
       
   }    
    
}