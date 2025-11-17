#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int target)
{
    if(start>end)
    {
        return -1;
    }
    
    int mid = (start + end)/2;

    if(arr[mid]==target)
    {
        return mid;
    }
    if(arr[mid]<target)
    {
        return binarySearch(arr,mid+1,end,target);
    }
    else
    {
        return binarySearch(arr,start,mid-1,target);
    }
}

int main()
{
   int arr[5] = {17,21,33,39,43};
   int size = 5;
   int target;
   cout<<"Enter target"<<endl;
   cin>>target;

    int index = binarySearch(arr,0,size-1,target);

    if(index==-1)
    {
        cout<<"target not found"<<endl;
    }
    else {
        cout<<"Target found"<<endl;
    }
}