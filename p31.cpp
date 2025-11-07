/*
    stack using a 1 queue...

    using our own Queue created in file p30.cpp

    push() to insert an element into the stack.
    pop() to remove an element from the stack.
    top() Returns the top element of the stack.
    Empty() returns true if stack is empty else false.
    size() returns the size of the stack.
*/

#include<iostream>
#include"p30.cpp"

using namespace std;

class Stack
{
    Queue q;

    public:

        bool empty(); 
        void push(int data);
        int top();
        int size();
        int pop();
    
};

bool Stack::empty()
{
    if(q.empty()==true)
    {
        return true;
    }
    return false;
}

void Stack::push(int data)
{
    if(q.full()==true)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    q.push(data);
    cout<<data<<" : insterted"<<endl;
}

int Stack::top()
{
    if(empty()==true)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }

    return q.back();
}

int Stack::size()
{
    return q.size();
}

int Stack::pop()
{
    if(empty()==true)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }

    int s = q.size();
    for(int i = 0;i< s-1;i++)
    {
        int f = q.front();
        q.pop();
        q.push(f);
    }
    int popElement = q.front();
    q.pop();
    return popElement;

}

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.push(60);

    cout<<"Top element of stack : "<<st.top()<<endl;

    st.pop();
    cout<<"Top element of stack : "<<st.top()<<endl;
    st.push(70);
    cout<<"Top element of stack : "<<st.top()<<endl;
}
