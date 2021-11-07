#include <iostream>
#include <iterator>

using namespace std;

int arr[10];

template<size_t N>
int arr_len(int (&arr)[N])
{
    
   return std::end(arr) - std::begin(arr);
}

template<size_t N>
int arr_filled(int (&arr)[N]){
    int count=0;
    int len = arr_len(arr);
    for(int i=0;i<len;i++)
    {
        if(arr[i]!='\0'){
            count++;
        }
            
    }
    return count;
}



int main()
{
    arr[1]=6;
    arr[5]=33;
    arr[0]=6;
    
   //auto array_length = end(arr) - begin(arr);
    
    cout<<"arrey length :"<<arr_len(arr)<<endl;
    cout<<"arrey filled :"<<arr_filled(arr);
    return 0;
}