#include<iostream>
#include<string>
using namespace std;
int main()
{
    char alphabet='a';
    int count=0;
    while(count<26)
    {
        cout<<alphabet<<" ";
        count++;
        alphabet++;
    }
    cout<<endl;
    string something="King_in_the_north";
    for(int i=something.length()-1;i>=0;i--)
    {
        cout<<something[i];
    }

}