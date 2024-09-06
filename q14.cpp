#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int *array,int length)
{
    for(int i=0;i<length;i++)
    {
        int min=i;
        for(int j=i+1;j<length;j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        swap(&array[i],&array[min]);
    }
}
void display(int *array,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[10]={9,8,7,6,5,4,3,2,1,15};
    display(array,10);
    selection_sort(array,10);
       display(array,10);
}