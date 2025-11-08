/*
    Queue using a 2 stack.

    stack taken from own - .

    push() to insert an element into the Queue.
    pop() to remove an element from the Queue.
    front() Returns the front element of the Queue.
    back() return the rear elementof the queue
    Empty() returns true if queue is empty else false.
    size() returns the size of the queue.
*/

#include<iostream>
#include"Stack.cpp"
using namespace std;

class Queue
{
    Stack st;

    public:

        bool empty(); 
        void push(int data);
        int front();
        int back();
        int size();
        int pop();
    
};

bool Queue::empty()
{
    if(st.empty()==true)
    {
        return true;
    }
    return false;
}

int Queue::size()
{
    return st.size();
}

void Queue::push(int data)
{
    if(st.full()==true)
    {
        cout<<" Overflow"<<endl;
        return;
    }
    st.push(data);
}

int Queue::back()
{
    if(empty()==true)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }

    return st.top();
}

int Queue::front()
{
    if(empty()==true)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }

    Stack temp;
    while(st.empty()!=true)
    {
        int t = st.top();
        st.pop();
        temp.push(t);
    }

    int frnt = temp.top();
    
    while(temp.empty()!=true)
    {
        int t = temp.top();
        temp.pop();
        st.push(t);
    }

    return frnt;
}

int Queue::pop()
{
    if(empty()==true)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }

    Stack temp;
    while(st.empty()!=true)
    {
        int t = st.top();
        st.pop();
        temp.push(t);
    }

    int popElement = temp.top();
    temp.pop();
    
    while(temp.empty()!=true)
    {
        int t = temp.top();
        temp.pop();
        st.push(t);
    }

    return popElement;
}
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.push(60);

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

    q.pop();

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

    q.push(60);

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

}
