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
    void deleteNode(int target);
    void insertAtMiddle(int val,int target);
};

void LinkedList:: insertAtMiddle(int val,int target)
{
    if(head == NULL)
    {
        return;
    }

    Node* cur = head;

    do
    {
        
        if(cur->data == target)
        {
            
            Node *temp = new Node;
            temp-> data = val;
            temp->next = cur->next;
            cur->next = temp;
            return;
        }
        cur = cur->next;
    }while(cur!=head);
}

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
        Node *cur = head;

        while(cur->next != head)
        {
            cur = cur->next;
        }

        head = head->next;
        delete temp;
        cur->next = head;
        return;
    }

    Node *cur = head->next;
    Node *prev = head;
    while(cur!=head)
    {
        if(cur->data == target)
        {
            //element found -> delete
            prev->next = cur->next;
            delete cur;
            return;
        }
        prev = cur;
        cur = cur->next;
    }
    cout<<"No such element present"<<endl;
}

void LinkedList::insertAtHead(int val)
{
    Node *temp = new Node;
    temp->data = val;

    if(head==NULL)
    {
        head = temp;
        head->next = head;
    }
    else
    {
        temp->next = head;
        //find the tail NOde
        Node *cur = head;
        while(cur->next != head)
        {
            cur = cur ->next;
        }
        cur->next = temp;
        head = temp;
    }
   
}

void LinkedList::printList()
{
    if(head == NULL)
    {
        return;
    }

    Node *cur = head;

    do
    {
        cout<<cur->data<<"\t";
        cur = cur->next;
    }while(cur!=head);
    cout<<endl;
}

int main()
{
    LinkedList cll;

    cll.insertAtHead(40);
    cll.insertAtHead(30);
    cll.insertAtHead(20);
    cll.insertAtHead(10);
    cll.insertAtHead(5);

   cll.printList();

   cll.deleteNode(40);
   cll.printList();

   cll.insertAtMiddle(50,30);

   cll.printList();
}