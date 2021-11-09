#include <iostream>


using namespace std;
int len;
int arr[100];

void filldata(){
    cout<<"Enter length : ";
    cin>>len;
    for (size_t i = 0; i < len; i++)
    {
        arr[i]=rand();
    }
}

void printdata(){
    for (size_t i = 0; i < len; i++)
    {
        cout<<"Index "<<i<<" = "<<arr[i]<<endl;
    }
    
}

void deletedata(){
    cout<<"Enter Index to delete";
    int index;
    cin>>index;
    len=len-1;
    for (size_t i = index; i < len; i++)
    {
        arr[i]=arr[i+1];
    }
    
}

void updatedata(){
    cout<<"Enter new value : ";
    int val;
    cin>>val;
    cout<<"Enter index : ";
    int index;
    cin>>index;

    arr[index]=val;
}

void search(){
    cout<<"Enter number to search : ";
    int num;
    cin>>num;

    for (int i = 0; i < len; i++)
    {
       if (arr[i]==num)
       {
           cout<<"Found in index "<<i<<endl;
           break;
       }
       
    }
    
}

int main()
{
    
    filldata();
    printdata();
    // deletedata();
    // printdata();
    // updatedata();
    // printdata();
    search();
}