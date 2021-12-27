#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <processthreadsapi.h>

using namespace std;
using namespace std::chrono;

int getCount()
{
    fstream file("Data4.txt");
    string data;
    int count = 0;
    while (getline(file, data, ','))
    {
        // cout << data << "\t";
        // datalist[count]=stoi(data);
        count++;
    }
    return count;
}

int *datalist = (int *)malloc(getCount() * sizeof(int));

int length = getCount();
static int count = 0;

void fill_data()
{
    ifstream file("Data4.txt");
    string data;
    int count = 0;
    while (getline(file, data, ','))
    {
        // cout << data << "\t";
        datalist[count] = stoi(data);
        count++;
    }
    std::cout << count << " of data filled" << std::endl;
    file.close();
}

void print_data()
{
    for (int i = 0; i < getCount(); i++)
    {
        std::cout << datalist[i] << endl;
    }
}

void BubbleSort()
{
    count = 0;
    std::cout << "BubbleSort Started..." << std::endl;
    int temp;
    long long int count = 0;
    bool swap = false;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < length - 1; i++)
    {
        swap = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (datalist[j] > datalist[j + 1])
            {
                temp = datalist[j];
                datalist[j] = datalist[j + 1];
                datalist[j + 1] = temp;
                swap = true;
            }
            count++;
            // std::cout << "loop :"<<count << std::endl;
        }
        if (swap == false)
        {
            break;
        }
        // std::cout << "loop :"<<count << std::endl;
    }
    std::cout << "BubbleSort loop Count = " << count << std::endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Time taken by BubbleSort: " << duration.count() << " seconds" << endl;
}

void selecttionSort()
{
    count = 0;
    std::cout << "SelectionSort Started..." << std::endl;
    int min, idx, temp;
    long long int count = 0;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < length; i++)
    {
        min = datalist[i];
        for (int j = i + 1; j < length; j++)
        {
            if (min > datalist[j])
            {
                min = datalist[j];
                idx = j;
            }
            count++;
        }
        if (datalist[i] > datalist[idx])
        {
            temp = datalist[i];
            datalist[i] = datalist[idx];
            datalist[idx] = temp;
        }
        // std::cout << "loop :"<<count << std::endl;
    }
    std::cout << "SelectionSort loop count " << count << std::endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Time taken by SelectionSort: " << duration.count() << " seconds" << endl;
}

void insertSort()
{
    count = 0;
    std::cout << "InsertSort Started..." << std::endl;
    int tmp, j;

    long int count = 0;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < length; i++)
    {
        tmp = datalist[i];
        j = i - 1;

        while (j >= 0 and datalist[j] > tmp)
        {
            datalist[j + 1] = datalist[j];
            j = j - 1;
        }
        datalist[j + 1] = tmp;
        count++;
    }

    std::cout << "InsertSort loop count " << count << std::endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Time taken by InsertSort: " << duration.count() << " seconds" << endl;
}

int partition(int lb, int ub)
{
    int pivot = datalist[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (datalist[start] <= pivot)
        {
            start++;
        }
        while (datalist[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(datalist[start], datalist[end]);
        }
    }
    swap(datalist[lb], datalist[ub]);
    return end;
}

void quickSort(int lb, int ub)
{
    count++;
    int loc;
    if (lb < ub)
    {
        loc = partition(lb, ub);
        quickSort(lb, loc - 1);
        quickSort(loc + 1, ub);
    }
}

void runQucksort()
{
    count = 0;
    std::cout << "QuickSort Started..." << std::endl;
    auto start = high_resolution_clock::now();
    quickSort(0, length - 1);
    std::cout << "QuickSort loop count " << count << std::endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by QuickSort: " << duration.count() << " mili seconds" << endl;
}

void driver()
{
    int selection;
    do
    {
        cout << "Select sorting algorithem to run" << endl
             << "1 .Bubble Sort" << endl
             << "2 .Selection Sort" << endl
             << "3. Insert Sort" << endl
             << "4. Quick Sort" << endl
             << "5. Print Data" << endl
             << "0. Exit" << endl
             << "selection : ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            fill_data();
            BubbleSort();
            break;
        case 2:
            fill_data();
            selecttionSort();
            break;
        case 3:
            fill_data();
            insertSort();
            break;
        case 4:
            fill_data();
            runQucksort();
            break;
        case 5:
            print_data();
            break;
        case 0:
            break;
        default:
            cout << "Invalid selection" << endl;
            break;
        }
    } while (selection != 0);
}

int main()
{
    SetPriorityClass(GetCurrentProcess(), 0x00000080);

    // auto start = high_resolution_clock::now();
    for (int i = 0; i < 5; i++)
    {
        fill_data();
        BubbleSort();
    }

    // BubbleSort();
    // selecttionSort();
    // insertSort();
    // runQucksort();

    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<seconds>(stop - start);
    // cout << "Time taken by function: " << duration.count() << " seconds" << endl;

    // driver();
}