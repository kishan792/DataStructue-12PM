/*
    log(n) * (n)

    O(n * log(n));

    sc -> O(1);
*/

#include<iostream>
using namespace std;

void merge(int arr[],int s,int mid,int e)
{
    int temp[e+1];  
    int i = s;
    int j = mid+1;
    int k = 0;

    while(i<=mid && j<=e)
    {
        if(arr[i]<=arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    if(i>mid)
    {
        while(j<=e)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    if(j>e)
    {
        while(i<=mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
    }

    k = 0;
    for(int i = s;i<=e;i++)
    {
        arr[i] = temp[k];
        k++;
    }

}

void mergeSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
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

    mergeSort(arr,0,size-1);

    cout<<"Array element after sort"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}