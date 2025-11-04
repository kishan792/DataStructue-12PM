//Col with maximum sum O(n*m)
    //s.c = O(1)

/*
    Given a sorted array, return the index of a given value, or -1 if the element cannot be found.

    Given an array with all integers between 1 and 10 except for one, find the missing number.

    If you have two sorted arrays, how can you merge them and keep the resulting array sorted?

    Second Largest Element

    Third Largest Element

    Reverse an Array

    Rotate Array

    Move All Zeroes To End
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{8,4,6,3},{1,5,7,2},{3,9,11,15}};
    int rowSize = 3;
    int colSize = 4;

    int maxSum = 0;
    int colIndex = -1;
    for(int i = 0;i<colSize;i++)
    {
        int sum = 0;
        for(int j = 0;j<rowSize;j++)
        {
            sum = sum + arr[j][i];
        }
        if(sum>maxSum)
        {
            maxSum = sum;
            colIndex = i;
        }
        //cout<<"Sum of "<<i+1<<" col : "<<sum<<endl;
    }
    cout<<"Maximum sum colIndex : "<<colIndex+1<<endl;
    cout<<"Maximum sum : "<<maxSum<<endl;
}