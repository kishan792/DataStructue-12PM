/*
    A fixed size stack has a predefined capacity.
Once it becomes full, no more elements can be added (this causes overflow).
If the stack is empty and we try to remove an element, it causes underflow.
Typically implemented using a static array.

push() to insert an element into the stack.
pop() to remove an element from the stack.
top() Returns the top element of the stack.
Empty() returns true if stack is empty else false.
full() return true if stack is full else false
size() returns the size of the stack.

overflow _. when stack is full and user try to insert a value


*/

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
    //void display();
};

// void Stack::display()
// {
//     for(int i = 0;i<=count;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

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
        cout<<data<<" : Not inserted"<<endl;
        return;
    }

    count++;
    arr[count] = data;
    cout<<data<<" :  inserted"<<endl;
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

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.push(60);

    cout<<"Top Element of stack : "<<st.top()<<endl;
    cout<<"Size of stack : "<<st.size()<<endl;

    st.pop();

    cout<<"Top Element of stack : "<<st.top()<<endl;
    cout<<"Size of stack : "<<st.size()<<endl;

    st.push(60);

    cout<<"Top Element of stack : "<<st.top()<<endl;
    cout<<"Size of stack : "<<st.size()<<endl;

    //st.display();
    cout<<endl<<"Access stack element"<<endl;
    while(st.empty()!=true)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}