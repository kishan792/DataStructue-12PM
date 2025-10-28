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

        c++ struct ->keep data memeber public by default
        c++ class -> keep data member private by default...


*/

#include<iostream>
using namespace std;

class Bank{
    //data members
    int Acc = 123;
    string name; 
public:
    void intrest()
    {
        Acc= 2745678;
        cout<<Acc;
    }
};

int main()
{
    int a;
    //printf("Size of int : %d\n",sizeof(int));

    Bank s1;
    Bank *ptr = &s1;
    ptr->intrest();
    //cout<<s1.Acc;

}