#include<iostream>
using namespace std;
void insSort(int arr[],int size)
{
   for(int i =1;i<size;i++)
   {
    int elem = arr[i];
    int j = i-1;

    while(j>=0 && arr[j]>elem)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = elem;
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

    insSort(arr,size);

    cout<<"Array element after sort"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}