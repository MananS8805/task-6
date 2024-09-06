#include<iostream>
using namespace std;
int array_sum(int *array,int lenght)
{
    int sum=0;
    for(int i=length-1;i>=0;i--)
    {
        sum+=*(array+i);// u can aslo use sum+=array[i]
    }
    return sum;
}

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"sum of array elements is "<<array_sum(array,10);
}