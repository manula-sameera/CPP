#include <iostream>
#include <fstream>
#include <string>
//#include <chrono>
//#include <processthreadsapi.h>
#include <omp.h>

using namespace std;
//using namespace std::chrono;

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
        std::cout << datalist[i] << " , ";
    }
}

void BubbleSort()
{
    std::cout << "BubbleSort Started..." << std::endl;
    int temp, count = 0;
    bool swap = false;
    for (int i = 0; i < getCount() - 1; i++)
    {
        swap = false;
        for (int j = 0; j < getCount() - 1 - i; j++)
        {
            if (datalist[j] > datalist[j + 1])
            {
                temp = datalist[j];
                datalist[j] = datalist[j + 1];
                datalist[j + 1] = temp;
                swap = true;
            }
            count++;
            std::cout << "loop :"<<count << std::endl;
        }
        if (swap == false)
        {
            break;
        }
    }
    std::cout << "BubbleSort loop Count = " << count << std::endl;
}

int main()
{
    //SetPriorityClass(GetCurrentProcess(), 0x00000080);
    double start, end;
    double runTime;
    

    fill_data();
    //auto start = high_resolution_clock::now();
    start = omp_get_wtime();
    BubbleSort();

    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<seconds>(stop - start);
    //cout << "Time taken by function: " << duration.count() << " seconds" << endl;

    end = omp_get_wtime();
    runTime = end - start;
    cout << "Time taken by function: " <<runTime << " seconds" << endl;
}