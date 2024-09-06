#include<iostream>
using namespace std;

struct student
{
    int roll;
    string name;

};

void display_student(student *m)
{
    cout<<"roll no. is "<<m->roll<<endl;
    cout<<"Name is "<<m->name<<endl;
}
int main(){
    student s1;
    s1.name="jon snow";
    s1.roll=81;
    student *ptr=&s1;
    display_student(ptr);
    return 0;
}
