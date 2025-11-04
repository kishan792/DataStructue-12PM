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
