#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node *prev;
    
    Node()
    {
        next = NULL;
        prev = NULL;
    }
};

class LinkedList
{
    public:
        Node *head;
        Node* tail;
    
    LinkedList()
    {
        head = NULL;
        tail= NULL;
    }

    void insertAtHead(int val);
    void insertAtTail(int val);

    void printListFromHead();
    void printListFromTail();

    void insertAtMiddle(int val,int target);
     void deleteNode(int target);
    
};

void LinkedList::deleteNode(int target)
{
    if(head==NULL)
    {
        cout<<"No list created"<<endl;
        return;
    }


    if(head->data==target)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *cur = head;
    while(cur!=NULL)
    {
        if(cur->data == target)
        {
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            delete cur;
            return;
        }
        
        cur = cur->next;
    }
    cout<<"No such element present"<<endl;
}

void LinkedList::insertAtHead(int val)
{
    Node *temp = new Node;
    temp->data = val;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void LinkedList::insertAtTail(int val)
{
    Node *temp = new Node;
    temp->data = val;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else{
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void LinkedList::printListFromHead()
{
    Node *cur = head;

    while(cur!=NULL)
    {
        cout<<cur->data<<"\t";
        cur = cur->next;
    }
    cout<<endl;
}

void LinkedList::printListFromTail()
{
    Node *cur = tail;

    while(cur!=NULL)
    {
        cout<<cur->data<<"\t";
        cur = cur->prev;
    }
    cout<<endl;
}

void LinkedList:: insertAtMiddle(int val,int target)
{

    Node* cur = head;

    while(cur!=NULL)
    {
        if(cur->data == target)
        {
            Node *temp = new Node;
            temp-> data = val;

            cur->next->prev = temp;
            temp->next = cur->next;
            cur->next = temp;
            temp->prev = cur;
            return;
        }
        cur = cur->next;
    }
}

int main()
{
    LinkedList dll;

    dll.insertAtHead(10);
    dll.insertAtHead(15);
    dll.insertAtHead(5);
    dll.insertAtTail(55);
    dll.insertAtTail(35);

    dll.printListFromHead();

    dll.printListFromTail();

    dll.insertAtMiddle(41,10);

    dll.printListFromHead();

    dll.deleteNode(55);
     dll.printListFromHead();
}