#include <iostream>

using namespace std;

void PrintTot(int arr[][4],int rows,int columns){

    int tot[rows];
    for (int i = 0; i < rows; i++)
    {
        tot[i] = 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            tot[i] = tot[i]+arr[i][j];
        }
        
    }

    for (int i = 0; i < rows; i++)
    {
        cout<< "Row "<<i<<" Total is = "<<tot[i]<<endl;
    }
    
    

}

int main(){

    int arr[3][4];

     for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 4; j++)
      {
          cout<<"enter data for index ["<<i<<"]["<<j<<"} : ";
          cin>>arr[i][j];
      }
      
    }

    PrintTot(arr,3,4);
    return 0;
}