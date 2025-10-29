/*
    2way to store a 2d array into memory
        -> row major
        -> col major

    -> sum of 2d array
    -> row wise sum of 2d array
    -> col wise sum of 2d array
    -> row with maximum sum
    -> col with maximum sum

    ->maximum value in 2d array
    ->search a value in a 2d array
    ->linear search
    ->binary search
*/

#include<iostream>
using namespace std;

int main()
{
    //int arr[3][4] = {{8,4,6,3},{1,5,7,2},{3,9,11,15}};
    //Runtime input
    int arr[3][4];
    for(int i = 0;i<3;i++)
   {
    for(int j=0;j<4;j++)
    {
     cout<<"Enter the value of "<<i<<" row "<<j<<" col"<<endl;
     cin>>arr[i][j];  
    }
    
   }


   for(int i = 0;i<3;i++)
   {
    for(int j=0;j<4;j++)
    {
     cout<<arr[i][j]<<"\t";  
    }
    printf("\n");
   }
}