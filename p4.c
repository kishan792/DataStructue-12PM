#include<stdio.h>
void increment(int *ptr)
{
    *ptr = *ptr + 10; 
    printf("Inside increment function value of a : %d\n",*ptr); 
}

int main()
{
    int a = 10;
    printf("Inside main function value of a : %d\n",a);
    increment(&a);  
    printf("Inside main function value of a : %d\n",a);  
    return 0;
}