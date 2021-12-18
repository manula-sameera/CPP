#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

const int n = 100;

// https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html

int arr[n], arr2[n];

void fill()
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        arr2[i] = arr[i];
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " , ";
    }
    cout << endl;
}

void BubbleSort()
{
    int temp, count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            count++;
        }
    }
    std::cout << "BubbleSort1 Count = " << count << std::endl;
}

void BubbleSort2()
{
    int temp, count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            count++;
        }
    }
    std::cout << "BubbleSort2 Count = " << count << std::endl;
}

void BubbleSort3()
{
    int temp, count = 0;
    bool swap = false;
    for (int i = 0; i < n - 1; i++)
    {
        swap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
            count++;
        }
        if (swap == false)
        {
            break;
        }
    }
    std::cout << "BubbleSort3 Count = " << count << std::endl;
}

void selecttionSort()
{
    int min, idx, temp, count = 0;
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                idx = j;
            }
            count++;
        }
        if (arr[i] > arr[idx])
        {
            temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        }
    }
    std::cout << "SelectionSort count " << count << std::endl;
}

void insertSort()
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i] && j >= 0)
            {
                swap(arr[j], arr[i]);
                i--;
                count++;
            }
        }
    }
    std::cout << "InsertSort count " << count << std::endl;
}

void randomize()
{
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
}

void swap2(int a, int b)
{
    int temp;
    a = temp;
    a = b;
    b = temp;
}

int main()

{
    fill();
    BubbleSort3();
    randomize();
    selecttionSort();
    randomize();
    insertSort();
}