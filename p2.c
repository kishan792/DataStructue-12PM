#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    int count = 0;
    for(int i = 2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        printf("Num is prime\n");
    }
    else{
        printf("Num is not prime\n");
    }
}