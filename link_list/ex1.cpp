#include <iostream>

using namespace std;

Node* head= NULL;

class Node{
    public:
    int val;
    Node* Next;
};

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

