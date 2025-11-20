#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
    
    Node()
    {
        next = NULL;
    }
};

class LinkedList
{
    public:
        Node *head;
    
    LinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int val);
    void printList();
    bool serach(int target);
};

void LinkedList::insertAtHead(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->next = head;
    head = temp;
}

void LinkedList::printList()
{
    Node *cur = head;

    while(cur!=NULL)
    {
        cout<<cur->data<<"\t";
        cur = cur->next;
    }
}

bool LinkedList:: serach(int target)
{
    Node *cur = head;

    while(cur!=NULL)
    {
        if(cur->data == target)
        {
            return true;
        }
        cur = cur->next;
    }
    return false;
}

int main()
{
    LinkedList sll;
    sll.insertAtHead(10);
    sll.insertAtHead(20);
    sll.insertAtHead(15);
    sll.insertAtHead(25);
    sll.insertAtHead(30);


    sll.printList();

    bool flag = sll.serach(35);
    if(flag == true)
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

    
    
}