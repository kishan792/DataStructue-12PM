#include<iostream>
using namespace std;

int linearSearch(int arr[],int index,int size,int target)
{
    if(index==size)
    {
        return -1;
    }
    if(arr[index]==target)
    {
        return index;
    }
    return linearSearch(arr,index+1,size,target);
}

int main()
{
   int arr[5] = {17,12,11,19,23};
   int size = 5;
   int target;
   cout<<"Enter target"<<endl;
   cin>>target;

    int index = linearSearch(arr,0,size,target);

    if(index==-1)
    {
        cout<<"target not found"<<endl;
    }
    else {
        cout<<"Target found"<<endl;
    }
}