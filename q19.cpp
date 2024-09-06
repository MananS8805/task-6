#include<iostream>
using namespace std;

// Define a union with different data types
union Data {
    int i;
    float f;
    char c;
};

int main() {
    // Create a union object
    Data data;
    // Create a pointer to the union
    Data* ptr;
    // Point the pointer to the union
    ptr = &data;
    // Access and modify union members through the pointer
    ptr->i = 42;  // Set integer value
    cout << "Integer: " << ptr->i << endl;
    ptr->f = 3.14;  // Set float value
    cout << "Float: " << ptr->f << endl;
    ptr->c = 'A';  // Set character value
    cout << "Character: " << ptr->c << endl;

    cout<<"address of integer part of data "<<&(ptr->i)<<endl;
    cout<<"address of float part of data "<<&(ptr->f)<<endl;
    cout<<"address of char part of data "<<&(ptr->c)<<endl;
    return 0;
}
