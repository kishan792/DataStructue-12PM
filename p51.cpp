#include<iostream>
#include<queue>
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

        void levelOrder(Node* root);
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

void BinaryTree:: inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }


    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}

void BinaryTree:: postOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }


    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"\t"; 
}

void BinaryTree:: levelOrder(Node *root)
{
    queue<Node*> q;

    q.push(root);

    while(q.empty()!=true)
    {
        Node* cur = q.front();
        cout<<cur->data<<"\t";
        q.pop();

        if(cur->left != NULL)
        {
            q.push(cur->left);
        }
        if(cur->right != NULL)
        {
            q.push(cur->right);
        }
    }
}
int main()
{
    BinaryTree bt;

    Node* root = bt.createTree();

    cout<<"PreOrder Traversal : "<<endl;
    bt.preOrder(root);
    cout<<endl;


    cout<<"InOrder Traversal : "<<endl;
    bt.inOrder(root);
    cout<<endl;


    cout<<"postOder Traversal : "<<endl;
    bt.postOrder(root);
    cout<<endl;

    cout<<"level Order Traversal : "<<endl;
    bt.levelOrder(root);
    cout<<endl;
}