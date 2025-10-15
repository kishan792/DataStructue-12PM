#include<iostream>
using namespace std;
int binarySearch(int nums[],int size,int target)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        int midIndex = (start+end)/2;

        if(nums[midIndex]==target)
        {
            return midIndex;
        }
        else if(target<nums[midIndex])
        {
            end = midIndex - 1;
        }
        else
        {
            start = midIndex + 1;
        }
    }
    return -1;
}
int main()
{
    int nums[11] = {11,12,19,21,23,28,31,53,57,59,63};
    int size = 11;
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    int index = binarySearch(nums,size,target);

    if(index==-1)
    {
        cout<<"Element not found\n";
    }
    else{
        cout<<"Element Found : "<<index<<endl;
    }

    return 0;

}