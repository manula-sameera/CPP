#include <iostream>

using namespace std;


//requst user inputs to matrice
void get_matrix_values(int mat[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

//print matrice
void print_matrix(int mat[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

//subtract matrice
void subtract_matrix(int mat1[][3], int mat2[][3], int mat3[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main()
{

int m1[3][3];
int m2[3][3];
int m3[3][3];


cout<<"Enter values for matrix 1"<<endl;
get_matrix_values(m1,3,3);

cout<<"Enter values for matrix 2"<<endl;
get_matrix_values(m2,3,3);

cout<<"\n matrix 1 \n"<<endl;
print_matrix(m1,3,3);

cout<<"\n matrix 2 \n"<<endl;
print_matrix(m2,3,3);

subtract_matrix(m1,m2,m3,3,3);

cout<<"\n answer \n"<<endl;
print_matrix(m3,3,3);


return 0; 
}