#include<stdio.h>
int main()
{
    char a = '@';
    char *ptr = &a;

    //printf("Value of a : %d\n",a);
    printf("Address of a : %d\n",&a);

    printf("Value of ptr : %d\n",ptr);
    printf("Address of ptr : %d\n",&ptr);

    
   // printf("Value of a using ptr : %d\n",*ptr);

    ptr = ptr + 0;

   printf("Value of ptr : %d\n",ptr);
    
}