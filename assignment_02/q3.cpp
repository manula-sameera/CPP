#include <iostream>

using namespace std;

int main(){

    double heights[100];

    double input;
    double sum=0;
    bool check = true;
    int count = 0;

    while (check==true)
    {
        cout<<"Enter height : ";
        cin>>input;
        if (input<0)
        {
            cout<<"Invalid number"<<endl;
            break;
        }
        
        if (input !=99)
        {
           heights[count] = input;
           count++;
        }else{
            check = false;
            break;
        }      
    }
    
    double max = heights[0];
    double min = heights[0];

    for (int i = 0; i < count; i++)
    {
        sum = sum+heights[i];
        if (max<heights[i])
        {
            max = heights[i];
        }
        if (min>heights[i])
        {
            min = heights[i];
        }    
    }
    
    
    cout<<"Avarage height : "<<sum/count<<endl;
    cout<<"Max height : "<<max<<endl;
    cout<<"Min height : "<<min<<endl;


    return 0;
}