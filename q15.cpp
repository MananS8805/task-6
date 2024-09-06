#include<iostream>
using namespace std;

int* address(int &a)  // Pass by reference to access the variable's address
{
    return &a;
}

int main() {
    int a = 5;
    cout << "Pointer address returned is: " << address(a) << endl;  // Call the correct function
}
