#include<iostream>
using namespace std;

/*
    What is class?


    structue -> user defined dataType
        -> structure is created with the help of struct keyword...

    union -> user defined datatype


*/

class Employee
{
    public:
    //data members
    int age;
    int sal;
};

int main()
{
    //int a;
    //int *ptr = &a;
    //ptr = (int*)malloc(sizeof(int));
  
     Employee e1 = {24,100};

     Employee *ptr = &e1;
    //struct Employee e2 = {30,500};

    //Access the structure member using dot operator
    printf("Age of 1st employee : %d\n",e1.age);
    printf("Sal of 1st employee : %d\n",e1.sal);

    //Access the structure member using pointer variable (->) arrow  operator
    printf("Age of 1st employee : %d\n",ptr->age);
    printf("Sal of 1st employee : %d\n",ptr->sal);

    Employee* pt = ( Employee*)malloc(sizeof(struct Employee));
   pt->age = 30;
   pt->sal = 500;

   printf("Age of 2nd employee : %d\n",pt->age);
    printf("Sal of 2nd employee : %d\n",pt->sal);



}