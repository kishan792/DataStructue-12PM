#include<bits/stdc++.h>
#define cap 15
using namespace std;
class Heap
{
    int arr[cap];
    int count;
    public:
        Heap()
        {
            count = 0;
        }
        void insertAtHeap(int data);
        int deleteFromHeap();
        void print();
};

void Heap::print()
{
    for(int i = 1;i<=count;i++)
    {
        cout<<arr[i]<<"  ";

    }
    cout<<endl;
}

void Heap::insertAtHeap(int data)
{
    if(count == cap-1)
    {
        return;
    }

    count++;
    arr[count] = data;
    int i = count;

    while(i > 1)
    {
        int parent = i / 2;
        if(arr[parent] < data)
        {
            swap(arr[i],arr[parent]);
            i = parent;
        }
        else{
            break;
        }
    }

}

int Heap::deleteFromHeap()
{
    /*
        -> swap the top element with last element
        -> then check and build the heap again
        -> count--;
    */

    swap(arr[1],arr[count]);
    count--;
    int i = 1;
    int largest = i;
    while( i <= count)
    {
        int lc = 2*i;
        int rc = 2*i+1;

        if(lc <= count &&  arr[lc] > arr[largest] )
        {
            largest = lc;
        }

        if(rc <= count && arr[rc] > arr[largest])
        {
            largest = rc;
        }

        if(largest != i)
        {
            swap(arr[largest], arr[i]);
            i = largest;
        }
        else
        {
            break;
        }
    }

    return arr[count+1];
}
int main()
{
    Heap maxHeap;

    maxHeap.insertAtHeap(90);
    maxHeap.insertAtHeap(45);
    maxHeap.insertAtHeap(93);
    maxHeap.insertAtHeap(19);
    maxHeap.insertAtHeap(86);
    maxHeap.insertAtHeap(43);
    maxHeap.insertAtHeap(84);
    maxHeap.insertAtHeap(73);
    maxHeap.insertAtHeap(76);
    maxHeap.insertAtHeap(64);
    maxHeap.insertAtHeap(68);

    cout<<"Deleted Value : "<<maxHeap.deleteFromHeap();

    maxHeap.print();

   

}