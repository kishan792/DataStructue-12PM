//Circular Queue

#include<iostream>
#define cap 5
using namespace std;

class Queue
{
    int *arr;
    int frnt;
    int count;

    public: 
        Queue()
        {
            arr = new int[cap];
            frnt = 0; // alway point to the front element
            count = 0; //track the no of elemenmt inserted
        }

        bool empty(); 
        bool full();
        void push(int data);
        int front();
        int back();
        int size();
        int pop();
};
int Queue::size()
{
    return count;
}

bool Queue::empty()
{
    if(count == 0)
    {
        return true;
    }
    return false;
}

bool Queue::full()
{
    if(count == cap)
    {
        return true;
    }
    return false;
}

void Queue::push(int data)
{
    if(full()==true)
    {
        cout<<"Queue overflow\n";
        return;
    }

    int rear = (frnt + count) % cap;
    arr[rear] = data;
    count++;
    //cout<<"Element insterted : "<<data<<endl;

}

int Queue:: pop()
{
    if(empty()==true)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }

    int popElement = arr[frnt];
    frnt = (frnt + 1) % cap;
    count--;
    return popElement;
}

int Queue::front()
{
    if(empty()==true)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }

    return arr[frnt];
}

int Queue::back()
{
    if(empty()==true)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }

    int rear = (frnt + count -1) % cap;
    return arr[rear];
}


// int main()
// {
//     Queue q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     q.push(60); //overflow error

//     cout<<"Front Element : "<<q.front()<<endl;
//     cout<<"Back Element : "<<q.back()<<endl;

//     q.pop(); 

//     cout<<"Front Element : "<<q.front()<<endl;
//     cout<<"Back Element : "<<q.back()<<endl; 

//     q.push(60);

//     cout<<"Front Element : "<<q.front()<<endl;
//     cout<<"Back Element : "<<q.back()<<endl;

//     q.pop();

//     cout<<"Front Element : "<<q.front()<<endl;
//     cout<<"Back Element : "<<q.back()<<endl;

//     cout<<"Accessing all the element of the queue"<<endl;

//     while(q.empty()!=true)
//     {
//         cout<<q.front()<<endl;
//         q.pop();
//     }

//     /*
//         int s = q.size();
//         for(int i = 0;i<s;i++)
//         {
//             int f = q.front();
//             cout<<q.front()<<endl;
//             q.pop();
//             q.push(f);
//         }

//     */
// }

