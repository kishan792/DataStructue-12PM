/*
    What is class?


    structue -> user defined dataType
        -> structure is created with the help of struct keyword...

    union -> user defined datatype


*/

#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    //data members
    int age;
    int sal;
};

int main()
{
    //int a;
    //int *ptr = &a;
    //ptr = (int*)malloc(sizeof(int));
  
    struct Employee e1 = {24,100};

    struct Employee *ptr = &e1;
    //struct Employee e2 = {30,500};

    //Access the structure member using dot operator
    printf("Age of 1st employee : %d\n",e1.age);
    printf("Sal of 1st employee : %d\n",e1.sal);

    //Access the structure member using pointer variable (->) arrow  operator
    printf("Age of 1st employee : %d\n",ptr->age);
    printf("Sal of 1st employee : %d\n",ptr->sal);

   struct Employee* pt = (struct Employee*)malloc(sizeof(struct Employee));
   pt->age = 30;
   pt->sal = 500;

   printf("Age of 2nd employee : %d\n",pt->age);
    printf("Sal of 2nd employee : %d\n",pt->sal);



}