#include<iostream>
#define capacity 5 //constant
using namespace std;

class Stack
{
    int *arr;
    int count;

    public:

        Stack()
        {
            arr = new int[capacity];
            count = -1;
        }
    bool empty(); 
    bool full();
    void push(int data);
    int top();
    int size();
    int pop();
};

//returnType className :: functionName()
bool Stack::empty()
 {
    if(count==-1)
    {
        return true;
    }
    return false;
}

bool Stack::full()
{
    if(count == capacity-1)
    {
        return true;
    }
    return false;
}

void Stack::push(int data)
{
    if(full()==true)
    {
        cout<<"Stack overflow"<<endl;
        //cout<<data<<" : Not inserted"<<endl;
        return;
    }

    count++;
    arr[count] = data;
    //cout<<data<<" :  inserted"<<endl;
}

int Stack::top()
{
    if(empty()==true)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    return arr[count];
}

int Stack::size()
{
    return count+1;
}

int Stack ::pop()
{
    if(empty()==true)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }

    count--;
    return arr[count+1];
}