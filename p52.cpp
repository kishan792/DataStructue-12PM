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
       Node* insertNode(Node *root,int d);
        void preOrder(Node *root);
        void inOrder(Node *root);
        void postOrder(Node *root);

        void levelOrder(Node* root);

        bool searchNode(Node* root,int target);
        bool searchNode1(Node* root,int target);
        Node* deleteNode(Node* root,int target);
        int getMax(Node *root);
};

int BinaryTree::getMax(Node *root)
{
    Node* cur = root;

    while(cur->right != NULL)
    {
        cur = cur->right;
    }

    return cur->data;
}

Node* BinaryTree::deleteNode(Node* root,int target)
{
    if(root == NULL)
    {
        return root;
    }

    if(root->data == target)
    {
        //delete logic
        //O child case
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        //1 child case -> left child case
        if(root->left !=NULL && root->right == NULL)
        {
            Node* cur = root->left;
            delete root;
            return cur;
        }

        //1 child case -> right child case
        if(root->left ==NULL && root->right != NULL)
        {
            Node* cur = root->right;
            delete root;
            return cur;
        }

        //both child case
        if(root->left != NULL && root->right !=NULL)
        {
            int mx = getMax(root->left);
            root->data = mx;
            root->left = deleteNode(root->left,mx);
            return root;
        }
    }
    else if(target < root->data)
    {
        root->left = deleteNode(root->left,target);
        return root;
    }
    root->right = deleteNode(root->right,target);
    return root;
}

bool BinaryTree:: searchNode1(Node *root,int target)
{
   if(root == NULL)
   {
    return false;
   }

   if(root->data == target)
   {
    return true;
   }

   if(target < root->data)
   {
    return searchNode1(root->left,target);
   }
   return searchNode1(root->right,target);
    
}

bool BinaryTree:: searchNode(Node *root,int target)
{
    Node* cur = root;
    while(cur!=NULL)
    {
        if(cur->data == target)
        {
            return true;
        }

        else if(target < cur->data)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
    return false;
}

Node* BinaryTree::insertNode(Node *root,int d)
{ 
   if(root == NULL)
   {
    Node *temp = new Node;
    temp->data = d;
    return temp;
   } 

   if(d > root->data)
   {
    root->right = insertNode(root->right,d);
   }
   else{
   root->left = insertNode(root->left,d);
   }

   //height = balance factor -> rotation

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

int main()
{
    BinaryTree bst;
    Node *root = NULL;
    

    while(true)
    {
        int d;
        cout<<"Enter d"<<endl;
        cin>>d;

        if(d==-1)
        {
            break;
        }

        root = bst.insertNode(root,d);
    }

    cout<<"PreOrder Traversal : "<<endl;
    bst.preOrder(root);
    cout<<endl;


    cout<<"InOrder Traversal : "<<endl;
    bst.inOrder(root);
    cout<<endl;


    cout<<"postOder Traversal : "<<endl;
    bst.postOrder(root);
    cout<<endl;

    int target;
    cout<<"Enter Target"<<endl;
    cin>>target;

    // bool flag = bst.searchNode1(root,target);
    // if(flag == true)
    // {
    //     cout<<"Element Found"<<endl;
    // }
    // else{
    //     cout<<"Element Not found"<<endl;
    // }

    root = bst.deleteNode(root,target);
    cout<<"InOrder Traversal : "<<endl;
    bst.inOrder(root);
    cout<<endl;


}