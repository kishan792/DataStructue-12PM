#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
    
    Node()
    {
        left = NULL;
        right = NULL;
    }
};

class BinaryTree
{

    public:
       Node* createTree();
        void preOrder(Node *root);
        void inOrder(Node *root);
        void postOrder(Node *root);
};

Node* BinaryTree::createTree()
{
    int d;
    cout<<"Enter the value"<<endl;
    cin>>d;

    if(d == -1)
    {
        return NULL;
    }

    Node *root = new Node;
    root->data = d;

    root->left = createTree();
    root->right = createTree();

    return root;
}

int main()
{
    BinaryTree bt;

    Node* root = bt.createTree();
}