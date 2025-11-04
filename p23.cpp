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

    rotateArray(arr,size);
    
    cout<<"Array after rotate "<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
