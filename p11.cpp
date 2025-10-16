#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size)
{
   for(int i = 0;i<size;i++)
   {
    for(int j = 0;j<size-1;j++)
    {
        if(arr[j]<arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }
}
int main()
{
    int arr[5] = {17,11,18,23,15};
    int size = 5;

    cout<<"Array element before sort"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    bubbleSort(arr,size);

    cout<<"Array element after sort"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}