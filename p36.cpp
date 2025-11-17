#include<iostream>
using namespace std;
void display(int n)
{
    if(n<=0)
    {
        return;
    }
    
    cout<<"n : "<<n<<endl;
    display(n-1);
    
}

int main()
{
    cout<<"Inside main"<<endl;
    int n = 3;
    display(n);
    cout<<"Back to main"<<endl;
}