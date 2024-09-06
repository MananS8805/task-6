#include<iostream>
using namespace std;
int add(int *a,int *b)
{
    return (*a)+(*b);
}
int main()
{
    int a,b;
    a=5;
    b=12;
    int sum=add(&a,&b); // function called by passing parameters as reference
    cout<<"sum is "<<sum;
    int *p1=&a;
    int *p2=&b;
    int sum2=*p1 + * p2; //demonstrated using pointer addition
    cout<<"sum is "<<sum2; 
}