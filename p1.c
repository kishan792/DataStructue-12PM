/*
    1 byte = 8 bits

    function() -> argument 
                -> return 

    & _ addressOf

    pointer -> speacial variable that store the address of another variable.

    double pointer -> special pointer that store the address of another pointer.
*/

#include<stdio.h>
void main()
{
    int a = 10;
    int *ptr = &a;

    int **pt = &ptr;

    int ***p = &pt;

    printf("Value of a : %d\n",a);
    printf("Adress of a : %p\n",&a);

    printf("Value of ptr : %p\n",ptr);
    printf("address of ptr : %p\n",&ptr);
    

    printf("value of a using ptr : %d\n",*ptr);

    printf("Value of pt : %p\n",pt);
    printf("address of pt : %p\n",&pt);

    //*pt = > value of ptr => address of a
    //**pt => value of a

    printf("value of a using pt : %d\n",**pt);

    printf("\n\n\n");

    printf("%d\n",***p);


}