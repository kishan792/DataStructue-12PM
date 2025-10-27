/*
Realloc()->
accpect two argument
1st -> previous address
2nd -> new size in interger
new ->

new dataType[no of blocks];

new is similar to calloc() in c

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    //int *ptr = NULL;

    cout<<"Enter the no of element you want to store\n";
    cin>>n;

    //ptr = (int*)malloc(n*sizeof(int));
    int* ptr = new int[n];

    if(ptr==NULL)
    {
        cout<<"Error allocationg memory\n";
        return 0;
    }

    //user input
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" Element"<<endl;
        cin>>ptr[i];
    }

     for(int i = 0;i<n;i++)
    {
        cout<<"Value of the "<<i<<"element : "<<ptr[i]<<endl;
    }


    delete ptr;
}