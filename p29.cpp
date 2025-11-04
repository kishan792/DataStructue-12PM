/*
    :- C++ -> STL -> #include<queue>

    Operation on Queue

    -> Enqueue -> push() -> to insert a element into the queue
    -> deQueue -> pop() -> to remove the element from the queue.
    -> empty() _. check if the queue is empty or not if empty return true else false;
    -> full() -> chech oif queue if full or not return true if full else false
    -> front() -> return the front 
    -> back() -> return the back element
    -> size() -> return the size of the queue.


    implemented Queue using a array -> simple queue
*/

#include<iostream>
#define cap 5
using namespace std;

class Queue
{
    int *arr;
    int frnt;
    int rear;

    public:

        Queue()
        {
            arr = new int[cap];
            rear = 0;
            frnt = -1;
        }
        ~Queue()
        {
            delete arr;
        }

        bool empty(); 
        bool full();
        void push(int data);
        int front();
        int back();
        int size();
        int pop();
};

bool Queue:: empty()
{
    if(frnt == -1)
    {
        return true;
    }
    return false;
}

bool Queue:: full()
{
    if(rear == cap)
    {
        return true;
    }
    return false;
}

void Queue::push(int data)
{
    if(full()==true)
    {
        cout<<"Queue overflow"<<endl;
        return;
    }
    arr[rear] = data;
    rear++;
}

int Queue::pop()
{
    if(empty() == true)
    {
        cout<<"Queue Underflow"<<endl;
        return -1;
    }
    frnt++;
    return arr[frnt];
}

int main()
{
    Queue q;
}
