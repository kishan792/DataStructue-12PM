//Circular Queue

#include<iostream>
#include<queue>
#define cap 5
using namespace std;




int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.push(60); //overflow error

    // cout<<"Front Element : "<<q.front()<<endl;
    // cout<<"Back Element : "<<q.back()<<endl;

    // q.pop(); 

    // cout<<"Front Element : "<<q.front()<<endl;
    // cout<<"Back Element : "<<q.back()<<endl; 

    // q.push(60);

    // cout<<"Front Element : "<<q.front()<<endl;
    // cout<<"Back Element : "<<q.back()<<endl;

    // q.pop();

    // cout<<"Front Element : "<<q.front()<<endl;
    // cout<<"Back Element : "<<q.back()<<endl;

    cout<<"Accessing all the element of the queue"<<endl;

    while(q.empty()!=true)
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    /*
        int s = q.size();
        for(int i = 0;i<s;i++)
        {
            int f = q.front();
            cout<<q.front()<<endl;
            q.pop();
            q.push(f);
        }

    */
}

