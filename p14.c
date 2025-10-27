/*
Realloc()->
accpect two argument
1st -> previous address
2nd -> new size in interger



*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr = NULL;

    printf("Enter the no of element you want to store\n");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Error allocating memory\n");
        return 0;
    }

    //user input
    for(int i = 0;i<n;i++)
    {
        printf("Enter the %d element\n",i+1);
        scanf("%d",ptr+i);
    }

     for(int i = 0;i<n;i++)
    {
        printf("Value of the %d element : %d\n",i+1,ptr[i]);
    }

    int num;
    printf("Enter the new no of element you want to store\n");
    scanf("%d",&num);
    int *ptr1;
    ptr1 = (int*)realloc(ptr,num*sizeof(int));

    if(ptr==ptr1)
    {
        printf("Same address\n");
    }
    else{
        printf("different address\n");
    }

    for(int i = n;i<num;i++)
    {
        printf("Enter the %d element\n",i+1);
        scanf("%d",ptr1+i);
    }

    printf("After relloc\n");

    for(int i = 0;i<num;i++)
    {
        printf("Value of the %d element : %d\n",i+1,ptr1[i]);
    }

    free(ptr);
    free(ptr1);
}