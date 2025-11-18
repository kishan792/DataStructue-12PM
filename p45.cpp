#include<stdio.h>
int main()
{
    {
        int a = 20;
        {
            int a = 15;
            {
               a = 10;
               printf("%d\n",a); 
            }
            printf("%d\n",a); 
        }
        printf("%d\n",a); 
    }
}