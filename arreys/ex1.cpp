#include <iostream>

using namespace std;

int main()
{
    int f[15];
    //𝑭(𝒏)=𝑭(𝒏−𝟏)+𝒂 ; Where n > 0, 𝐹(0)=1
    //𝑎 = 10
    // 1,11,21,31,41
    f[0] = 1;

    for (int i = 1; i < 15; i++)
    {
        f[i] = f[i - 1] + 10;
    }

    int i = 0;
    while (i < 15)
    {
        if (i == 4 or i == 9 or i == 14)
        {
            i++;
            continue;
        }
        cout <<"value "<<i+1<<" = "<< f[i] << endl;
        i++;
    }
}


// 𝑭(𝒏)=𝑭(𝒏−𝟏)+𝒂 ; Where n > 0, 𝐹(0)=1
// Consider above function for following question 

// Considering 𝑎 = 10, find first 5 elements in the series
// Create an integer array with 15 elements 
// Fill the array using a FOR LOOP, data should be used generated form above function (arr[0] = F(0), arr[1] = F(1)…)
// Print the array using a WHILE LOOP 

// Extend step (d): when printing ignore 5th , 10th & 15th indexes