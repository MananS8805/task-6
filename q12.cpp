#include<iostream>
using namespace std;

int factorial(int i)
{
    while((i)!=1)
    {
        return (i)*factorial(i -1);
    }
    return 1;
}
int main(){
    int num=5;
    cout<<"Factorial of 5 is "<<factorial(num);
    return 0;
}