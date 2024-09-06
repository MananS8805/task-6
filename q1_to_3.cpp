#include <iostream>
using namespace std;
int main(){
    int *pointer;// pointer declared
    int value=5;
    pointer=&value; // pointer stores address of value
    cout<<"Pointer referenced value is "<<*pointer<<endl;
    cout<<"Pointer address  is "<<pointer;

    // & is used to get address of a variable;
    // * is used to get value of a variable

    
    return 0;
}