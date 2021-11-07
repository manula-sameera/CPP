#include <iostream>
#include <string.h>


using namespace std;

int main(){
    char arr1[10]="Name 1";
    char arr2[10]="Name 2";
    char arr3[10];

    int len = strlen(arr1); //length


    // strcpy(arr3,arr1); //copy strcpy(destination,source)
    // cout<<arr3<<endl;

    // strcat(arr2,arr1); //append strcat(destination,source)
    // cout<<arr2<<endl;

    
    cout<<"length : "<<len<<endl;
    cout<<strcmp(arr1,arr2)<<endl;

    char arr4[20]="AbcDef";

    cout<<strlwr(arr4)<<endl; //lowercsase
    cout<<strupr(arr4)<<endl; //uppercase
}