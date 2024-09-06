#include<iostream>
using namespace std;
int max_in_array(int *array,int count)
{
    int max=*array; // array name represent first element and initializing max as the first element
    for(int i=0;i<count;i++)
    {
        if (array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int main()
{
    int c=10;
    int array[10]={1,2,33,44,5,6,77,88,9,10};
    cout<<"maximum element in array is "<<max_in_array(array,c);
}