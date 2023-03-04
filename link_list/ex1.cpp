#include <iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* Next;
};
Node* head= NULL;



class LinkList{

};

void print(Node* head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->Next;
    }
    
}

void appendnode(int val){
    Node* temp = new Node();
    temp->val=val;
    temp->Next=NULL;

    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        Node* temp1=head;
        while (temp1->Next!=NULL)
        {
            temp1=temp1->Next;
        }
        temp1->Next=temp;
    }
}

void PREPENDNODE(int val){
    Node* temp = new Node();
    temp->val=val;
    temp->Next=NULL;

    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->Next=head;
        head=temp;
    }
}

int count(){
    int count=0;
    Node* temp=head;
    while (temp!=NULL)
    {
        count++;
        temp=temp->Next;
    }
    return count;
}

//add new node to a given position
void addnode(int pos, int val){
    Node* temp = new Node();
    temp->val=val;
    temp->Next=NULL;

    if (pos==0)
    {
        PREPENDNODE(val);
    }
    else if (pos>count())
    {
        appendnode(val);
    }
    else
    {
        Node* temp1=head;
        for (int i = 0; i < pos-1; i++)
        {
            temp1=temp1->Next;
        }
        temp->Next=temp1->Next;
        temp1->Next=temp;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->val=20;
    second->val=50;
    third->val=60;

    head->Next = second;
    second->Next=third;
    third->Next=NULL;

    print(head);
}

