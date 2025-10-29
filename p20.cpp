#include<iostream>
using namespace std;
bool linearSearch(int arr[][4],int rowSize,int colSize,int target)
{
    for(int i = 0;i<rowSize;i++)
    {
        for(int j = 0;j<colSize;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {{8,4,6,3},{1,5,7,2},{3,9,11,15}};
    int rowSize = 3;
    int colSize = 4;

    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    bool flag = linearSearch(arr,rowSize,colSize,target);
    if(flag == true)
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}