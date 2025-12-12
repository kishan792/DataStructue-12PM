/*
    HeapSort => 
    Covert the array int a heap using heapify function

    largest element will be on top swap it with last index
    decrease the array size and again call the heapify fucntion for 0 Index.
*/
#include<iostream>
using namespace std;
void heapify(int arr[],int size,int i)
{
    int largest = i;
    int lc = 2*i + 1;
    int rc = 2*i + 2;

    if(lc < size && arr[lc] > arr[largest])
    {
        largest = lc;
    }

    if(rc < size && arr[rc] > arr[largest])
    {
        largest = rc;
    }

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,size,largest);
    }
}

void heapSort(int arr[],int size)
{

    for(int i = size/2 -1;i>=0;i--)
    {
        heapify(arr,size,i);
    }

   int n = size;

   for(int i = size-1;i>=0;i--)
   {
    swap(arr[0],arr[i]);
    n--;
    heapify(arr,n,0);
   } 

    
}
int main()
{
    int arr[11] ={23,71,86,41,13,49,63,72,75,34,48};
    int size = 11;

    

    heapSort(arr,size);

    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}