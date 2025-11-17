#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target)
{
    if(size==0)
    {
        return -1;
    }

    if(arr[size-1] == target)
    {
        return size - 1;
    }
    return linearSearch(arr,size-1,target);
}

int main()
{
   int arr[5] = {17,12,11,19,23};
   int size = 5;
   int target;
   cout<<"Enter target"<<endl;
   cin>>target;

    int index = linearSearch(arr,size,target);

    if(index==-1)
    {
        cout<<"target not found"<<endl;
    }
    else {
        cout<<"Target found"<<endl;
    }
}