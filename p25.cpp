//Merge two sorted array
//Time Com -> O(n) + o(m) + o(n+m * n+m)
//O(n+m * n+m)


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

void mergeArray(int a[],int sizeA,int b[],int sizeB,int c[])
{
    //copy array A to array C
    for(int i = 0;i<sizeA;i++)
    {
        c[i] = a[i];
    }

    //copy array B to array C
    for(int i = 0;i<sizeB;i++)
    {
        c[i+sizeA] = b[i];
    }

    insSort(c,sizeA+sizeB);

}
int main()
{
    int a[3] = {15,23,32};
    int sizeA = 3;

    int b[5] = {12,14,25,36,41};
    int sizeB = 5;

    int c[sizeA+sizeB];

    cout<<"Array after merge \n";
    mergeArray(a,sizeA,b,sizeB,c);

    for(int i = 0;i<sizeA+sizeB;i++)
    {
        cout<<c[i]<<"\t";
    }
    cout<<endl;
}