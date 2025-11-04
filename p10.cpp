#include<iostream>
using namespace std;
template<typename t>
void selectionSort(t arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        int mn = i;
        for(int j = i+1;j<size;j++)
        {
            if(arr[j]<arr[mn])
            {
                mn = j;
            }
        }
        int temp = arr[mn];
        arr[mn] = arr[i];
        arr[i] = temp;
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

    selectionSort<int>(arr,size);

    cout<<"Array element after sort"<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

}