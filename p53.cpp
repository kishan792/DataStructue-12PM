#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
    int height;

    Node()
    {
        left = NULL;
        right = NULL;
        height = 1;
    }
};

class BinaryTree{
    public:
       Node* insertAtAVL(Node *root,int d);
       int getHeight(Node *root);
       int getBalance(Node* root);
       Node* leftRotation(Node* x);
       Node* rightRotation(Node* y);
       void preOrder(Node* root);
};

Node* BinaryTree::leftRotation(Node* x)
{
    Node* y = x->right;
    Node* t2 = y->left;

    y->left = x;
    x->right = t2;

    x->height = max(getHeight(x->left),getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left),getHeight(y->right)) + 1;

    return y;
}

Node* BinaryTree::rightRotation(Node* y)
{
    Node* x = y->left;
    Node* t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->left),getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left),getHeight(x->right)) + 1;
    
    return x;
}

int BinaryTree::getBalance(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    return getHeight(root->left) - getHeight(root->right);
}

int BinaryTree::getHeight(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return root->height;
}

Node* BinaryTree:: insertAtAVL(Node *root,int d)
{
    if(root == NULL)
    {
        Node *temp = new Node;
        temp->data = d;
        return temp;
    }
     if(root->data < d)
    {
        root->right = insertAtAVL(root->right,d);
    }
    else if(root->data > d)
    {
        root->left = insertAtAVL(root->left,d);
    }

    root->height = max(getHeight(root->left),getHeight(root->right)) + 1;

    int balance = getBalance(root);

    if(balance < -1 && root->right->data < d)
    {
        return leftRotation(root);
    }

    if(balance > 1 && root->left->data > d)
    {
        return rightRotation(root);
    }

    if(balance > 1 && root->left->data < d)
    {
        root->left  = leftRotation(root->left);
        return rightRotation(root);
    }

     if(balance < -1 && root->right->data > d)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    return root;
}

void BinaryTree:: preOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    BinaryTree bt;

    Node* root = NULL;
    root = bt.insertAtAVL(root,50);
    root = bt.insertAtAVL(root,60);
    root = bt.insertAtAVL(root,55);

    bt.preOrder(root);


}