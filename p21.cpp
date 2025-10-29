//Time com -> O(n*m)
#include<iostream>
using namespace std;
bool binarySearch(int arr[][4],int rowSize,int colSize,int target)
{
  int start = 0;
  int end = (rowSize * colSize) -1;

  while(start<=end)
  {
    int midIndex = (start+end)/2;

    int rIndex = midIndex / colSize;
    int cIndex = midIndex % colSize;

    if(arr[rIndex][cIndex]==target)
    {
        return true;
    }
    else if(target< arr[rIndex][cIndex])
    {
        end = midIndex - 1;
    }
    else
    {
        start = midIndex + 1;
    }
  }  
  return false;
}  

int main()
{
    int arr[3][4] = {{8,14,16,33},{41,53,72,82},{93,99,111,115}};
    int rowSize = 3;
    int colSize = 4;

    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    bool flag = binarySearch(arr,rowSize,colSize,target);
    if(flag == true)
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}