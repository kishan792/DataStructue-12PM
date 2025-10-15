/*
    Linear data Structure
    (1) -> array

    Array -> array is the linear data structure collection of  similar type of data at continious memory allocation

    imp ->array have indexes and index start from 0. Why from 0?

    Type of array on basis of size-> Static Array -> Whose size is fixed
                               -> Dynamic Array -> Size can grow at runtime -> DMA

    declare of array -> 

    array name store the base address
    
        dataType arrayName[size] = {val1,val2,val3.....};
*/

#include<stdio.h>

void display(int nums[],int size)
{
    printf("Array print in display function\n");
    for(int i = 0;i<size;i++)
    {
        nums[i] = nums[i] + 1;
        printf("%d\t",nums[i]);
    }
    printf("\n");
}
int main()
{
    int nums[5] = {17,19,11,15,13};
    int size = 5;
    //access -> arrayname[index]

     printf("%d\n",*nums);
    // printf("%d\n",nums[1]);
    // printf("%d\n",nums[2]);
    // printf("%d\n",nums[3]);
    // printf("%d\n",nums[4]);

    printf("Array print in main function\n");
    for(int i = 0;i<size;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n");

    display(nums,size);

    printf("Array print in main function\n");
    for(int i = 0;i<size;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n");
}
