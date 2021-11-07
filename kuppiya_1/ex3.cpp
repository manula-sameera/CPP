#include <iostream>

using namespace std;

int main(){
    int numbers[2][2];
    //rows 2 columns 2
                            //1 = {5,10,15,20}
                            //2  = {4,8,12,16}+
                            //3 = {9,18,27,36}
    // numbers[0][0]=10;
    // numbers[0][1]=20;
    // numbers[1][0]=30;
    // numbers[1][1]=40;
    int count =1;
    for (int a = 0; a < 2; a++)
    {
       for (int b = 0; b < 2; b++)
       {
          cout<<"Enter number "<<count<<" : ";
          cin>>numbers[a][b];
          count++;
       }
       
    }
    

   for (int i = 0; i < 2; i++)//rows
   {
       for (int j = 0; j < 2 ; j++)//column
       {
           cout<<"numbers ["<<i<<"]["<<j<<"] : "<<numbers[i][j]<<endl;
       }
       
   }    
}