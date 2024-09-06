#include<iostream>
using namespace std;
int main(){
    string m="I am jon snow king in the north";
    int index=0;
    while(m[index]!='\0')
    {
        index++;
    }
    cout<<"Length of string is "<<index;
    // you can also strlen() functon just include header file <string> ot <string.h>
}