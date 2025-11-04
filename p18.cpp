/*
    Structure -> it is a group of dis simalr datatype known as datamember.
    it is a user defined datatype.
    it is created with the help of struct keyword..
        sytanx
    it provide seprate memory bloack to allits data memeber

        struct structurename
        {
            //data memebrs
        };

    Union -> it is a group of dis similar datatype known as datamember.
    it is a user defined datatype.
    it is created with the help of union keyword keyword..
    it provide same memory allocation to all its data member
        sytanx

        union unionName
        {
            //data memebrs
        };

*/

#include<iostream>
using namespace std;

struct Student{
    //data members
    int age;
    int roll; 
};

int main()
{
    int a;
    //printf("Size of int : %d\n",sizeof(int));

    Student s1;
    printf("Size of Student : %d\n",sizeof(Student));

    s1.age = 24;
    
    printf("Age of student 1: %d\n",s1.age);

    s1.roll = 9;
    printf("Roll of student 1: %d\n",s1.roll);


}