#include<iostream>
using namespace std;

int maximum(int *a,int *b)
{
    if(*a > *b)
    {
        return *a;
    }
    else if (*a < *b)
    {
        return *b;
    }
    else{
        return -1;
    }
    
}
int main(){
    int a=10;
    int b=5;
    int max=maximum(&a,&b);
    if (max==-1)
    {
        cout<<"BOth are same"<<endl;
    }
    else{
        cout<<"maximum number is "<<max<<endl;
    }
}