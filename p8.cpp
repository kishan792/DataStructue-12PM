#include<iostream>
using namespace std;

int linearSearch(int nums[],int size,int target)
{
    for(int i = 0;i<size;i++)
    {
        if(nums[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int nums[5] = {17,19,11,15,13};
    int size = 5;
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    int index = linearSearch(nums,size,target);

    if(index==-1)
    {
        cout<<"Element not found\n";
    }
    else{
        cout<<"Element Found : "<<index<<endl;
    }

    return 0;

}