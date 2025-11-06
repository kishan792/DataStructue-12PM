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
    if(empty()==true)
    {
        frnt++;
    }
    arr[rear] = data;
    rear++;
    cout<<data<<"  :     insterted "<<endl;
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

int Queue::front()
{
   if(empty() == true)
    {
        cout<<"Queue Underflow"<<endl;
        return -1;
    } 

    return arr[frnt];
}

int Queue::back()
{
   if(empty() == true)
    {
        cout<<"Queue Underflow"<<endl;
        return -1;
    } 

    return arr[rear -1];
}

int Queue::size()
{
    return rear + 1;
}

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;

    q.pop(); 

    cout<<"Front Element : "<<q.front()<<endl;
    cout<<"Back Element : "<<q.back()<<endl;   
    q.push(60);
}
