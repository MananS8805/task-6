include<iostream>
using namespace std;

void swap(int *q,int *p)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
}
int main()
{
    int a=5;
    int b=10;
    
    cout<<"element a before swap is "<<a<<endl;
    cout<<"element b before swap is "<<b<<endl;
    swap(&a,&b);
    cout<<"element a after swap is "<<a<<endl;
    cout<<"element b after swap is "<<b<<endl;
}
