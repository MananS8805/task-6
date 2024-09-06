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
    student s1,s2,s3,s4,s5;
    s1.name="jon snow";
    s1.roll=81;
    s2.name="king";
    s2.roll=81; // writing data of only two elements cause i am feeling  lazy ;)
    student *ptr=&s1;
    student *array[5]={&s1,&s2,&s3,&s4,&s5};
    display_student(array[1]);
    return 0;
}
