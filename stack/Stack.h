#include <stack>
#include <iostream>
#define MAX 5

using namespace std;

class Stack
{
private:
    int top;
    int arr[MAX];

public:
    Stack()
    {
        // reset top
        top = -1;
        // reset all values to zero (not necessary)
        for (int i = 0; i < MAX; i++)
        {
            arr[i] = 0;
        }
    }

    void push()
    {
        cout<<"Enter value :";
        int val;
        cin>>val;
        if(!isFull()){
            if (val)
        {
            top++;
            arr[top]=val;
        }else{
            cout<<"Invalid val"
        }
        }else{
            cout<<"Stack is full"<<endl;
        }
        
        
    }
    void pop()
    {
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
        }else{
            arr[top]=0;
        top--;
        }
    }
    bool isEmpty()
    {
        if (top==-1)
        {
            return true;
        }else{
            return false;
        }
        
    }
    bool isFull()
    {
        if (top==MAX-1)
        {
            return true;
        }else{
            return false;
        }
        
    }
    void peek()
    {
    }
    void size()
    {
    }
    void count()
    {
    }
    void display()
    {
    }
};
