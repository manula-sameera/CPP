#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int marks[3];
    string name,id;
    int input;
    int error_count=0;

    cout<<"Enter student name : ";
    cin>>name;
    cout<<"Enter student id : ";
    cin>>id;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter marks for subject "<<i+1<<" : ";
        cin>>input;
        if (!(input>=0 && input<=100))
        {
            if (error_count<1)
            {
                error_count++;
                cout<<"invalid input (count "<<error_count<<" )"<<endl;
                i--;
                continue;
            }else{
                cout<<"invalid input (count "<<error_count<<" ) subject "<<i+1<<" marks will 0"<<endl;
                marks[i] = 0;
                continue;
            }  
        }else{
            marks[i] = input;
        }
        
    }

    cout<<left<<setw(40)<<setfill('-')<<""<<endl;
    cout<<left<<setw(20)<<setfill(' ')<<"Student name : "<<name<<endl;
    cout<<left<<setw(20)<<setfill(' ')<<"Student id : "<<id<<endl;
    cout<<left<<setw(40)<<setfill('-')<<""<<endl;

    for (int i = 0; i < 3; i++)
    {
        if (marks[i]>=50)
        {
            cout<<"Subject "<<i+1<<" : pass"<<endl;
        }else{
            cout<<"Subject "<<i+1<<" : fail"<<endl;
        }    
    }
    cout<<left<<setw(40)<<setfill('-')<<""<<endl;
    for (int i = 0; i < 3; i++)
    {
        if (marks[i] >75)
        {
            cout<<"Subject "<<i+1<<" : Very Good"<<endl;
        }else if (marks[i]>=50)
        {
            cout<<"Subject "<<i+1<<" : Good"<<endl;
        }else if (marks[i]>=35)
        {
            cout<<"Subject "<<i+1<<" : Avarage"<<endl;
        }else{
            cout<<"Subject "<<i+1<<" : Fail"<<endl;
        }  
    }
    cout<<left<<setw(40)<<setfill('-')<<""<<endl;
    if (marks[0]>90 && marks[1]>90 && marks[2]>90)
    {
        cout<<"Congradulations you have a first class"<<endl;
        cout<<left<<setw(40)<<setfill('-')<<""<<endl;
    }
    
    
    
    

    return 0;
}