//Time Com -> O(k*n)

#include<iostream>
using namespace std;
void rotateArray(int arr[],int size)
{
    int temp = arr[size-1];
    for(int i = size-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main()
{
    int arr[5] = {17,11,18,23,15};
    int size = 5;

    int k;
    cout<<"Enter no of tme array need to be rotated"<<endl;
    cin>>k;

    for(int i = 0;i<k;i++)
    {
        rotateArray(arr,size);
    }
    
    cout<<"Array after rotate "<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
