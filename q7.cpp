#include<iostream>
using namespace std;
void display(int *array,int count)
{
    for(int i=0;i<count;i++)\
    {
        cout<<*(array+i)<<" "; // note u can also use array[i], *(array+i) will pass the address of next element
    }
}
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int c=10;// passing array name in function passes the address of the first element
    display(array,c);
}