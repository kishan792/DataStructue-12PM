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
    int middleElement();
};
int LinkedList::middleElement()
{
    Node *sp = head;
    Node *fp = head;

    while(fp!=NULL && fp->next!=NULL)
    {
        fp = fp->next->next;
        sp = sp->next;
    }
    return sp->data;
    
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
        head = head->next;
        delete temp;
        return;
    }

    Node *cur = head;
    Node *prev = NULL;
    while(cur!=NULL)
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
    cout<<endl;
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

    // bool flag = sll.serach(35);
    // if(flag == true)
    // {
    //     cout<<"Element Found"<<endl;
    // }
    // else
    // {
    //     cout<<"Element not found"<<endl;
    // }

    sll.deleteNode(32);
    
    sll.printList();

    int mid = sll.middleElement();  
    cout<<"Middle Element : "<<mid<<endl;  
}
















/*

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* cur = head;
        while(cur!=NULL)
        {
            st.push(cur->val);
            cur = cur->next;
        }

        cur = head;
        while(cur!=NULL)
        {
            if(cur->val != st.top())
            {
                return false;
            }
            st.pop();
            cur = cur->next;
        }
        return true;
    }
};

*/