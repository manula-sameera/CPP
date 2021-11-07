#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class datas{
    public:
    char *arr;

    datas(){
        arr = {1};
    }
    
    size_t  size = strlen(arr);

    ~datas(){
        delete[] arr;
    }
};

int main(int argc, const char** argv) {

    datas d1;
    //cout<<d1.size<<endl;
    //d1.~datas();
    //cout<<strlen(d1.arr)<<endl;
    cout<<d1.arr[0]<<endl;
    return 0;
}