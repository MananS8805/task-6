#include<iostream>
using namespace std;
int reverse_display(int *array,int length)
{
    for(int i=length-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
}

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int array_lenght=sizeof(array)/sizeof(array[0]);
    reverse_display(array,array_lenght);
}