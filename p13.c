//Dynamic array -> Dynamic memory allocation  using c --> <stdlib.h>
/*
    Memory Allocation and de allocation -> #include<stdlib.h>
    -> malloc()
        malloc accpect the size of memory in int in bytes as a argument

        syntax:-
            malloc(size)

        malloc returns the base address of the requested memory.
        malloc fuction returns a genric address / generic pointer /void pointer

        void pointer -> no associated data type
        NULL pointer ->points to NULL
        daggling pointer -> when a pointer is freed or deleted
    

        if sufficient memory is not avilable in heap it will return NULL pointer

    -> calloc()
         It accpect 2 argeuments 1st is the no of blocks and 2 is the size of each block

         it return multiple block


    -> free()
        To deallocate the memory

    c++ DMA
    new -> for allocation
    delete -> de allocation
    

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int a;
    int n;
    printf("Enter the no of element you want to store\n");
    scanf("%d",&n); //5

    int* ptr = (int*)calloc(n,sizeof(int));


    if(ptr==NULL)
    {
        printf("Error in allocation memory\n");
        return 0;
    }

    for(int i = 0;i<n;i++)
    {
        printf("Enter the %d Element\n",i+1);
        scanf("%d",ptr+i);
    }

     for(int i = 0;i<n;i++)
    {
        printf("%d Element : %d\n",i+1,ptr[i]);
    }


    free(ptr);
}