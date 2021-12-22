#include <iostream>

using namespace std;

class BinaryTree;

class Node
{
public:
    Node *left;
    int value;
    Node *right;
};

int main()
{
    BinaryTree bs;
    Node *root;
    
    return 0;
}

class BinaryTree
{
public:
    Node *createNode()
    {
        int val;
        std::cout << "Enter value for node (-1 for NULL) : " << std::endl;
        cin >> val;
        if (val == 0)
        {
            return 0;
        }

        Node *NewNode = new Node();
        NewNode->value = val;
        NewNode->left = NULL;
        NewNode->right = NULL;

        std::cout << "Enter Value for left side of " << val << std::endl;
        NewNode->left = createNode();

        std::cout << "Enter value for right side of " << val << std::endl;
        NewNode->right = createNode();

        return NewNode;
    }
};