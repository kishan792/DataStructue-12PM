//Merge two sorted array

//O(n+m)


#include<iostream>
#include"p10.cpp"
using namespace std;


void mergeArray(int a[],int sizeA,int b[],int sizeB,int c[])
{
    int i =0;
    int j = 0;
    int k = 0;
    while(i < sizeA && j < sizeB)
    {
        if(a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }

    if(i>sizeA)
    {
        while(j<sizeB)
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }

    if(j>sizeB)
    {
        while(i<sizeA)
        {
            c[k] = a[i];
            k++;
            i++;
        }
    }

}
int main()
{
    int a[3] = {15,23,32};
    int sizeA = 3;

    int b[5] = {12,14,25,36,41};
    int sizeB = 5;

    selectionSort(b,sizeB);

    // int c[sizeA+sizeB];

    // cout<<"Array after merge \n";
    // mergeArray(a,sizeA,b,sizeB,c);

    // for(int i = 0;i<sizeA+sizeB;i++)
    // {
    //     cout<<c[i]<<"\t";
    // }
    // cout<<endl;
}