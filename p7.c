#include<stdio.h>
int main()
{
    int nums[5] = {17,19,11,15,13};
    int size = 5;

    int *ptr = nums;

    //Accessing array element using another pointer
    for(int i = 0;i<size;i++)
    {
        printf("%d\t",*(nums+i));
    }

    printf("\n");
    
}