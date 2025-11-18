/*
    log(n) * (n)

    O(n * log(n));

    sc -> O(1);
*/

#include<iostream>
using namespace std;
int partion(int arr[],int s,int e)
{
    int pivot = arr[s];
    int i = s;
    int j = e;

    while(i<j)
    {
        while(arr[i]<=pivot && i<=e-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=s+1)
        {
            j--;
        }

        if(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[s];
    arr[s] = arr[j];
    arr[j] = temp;

    return j;
}
void qucikSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int part = partion(arr,s,e);
    qucikSort(arr,s,part-1);
    qucikSort(arr,part+1,e);
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

    qucikSort(arr,0,size-1);

    cout<<"Array element after sort"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}