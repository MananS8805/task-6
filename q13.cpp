#include<iostream>
#include<cctype>
using namespace std;

bool isvowel(char *a)
{
    char character=tolower(*a);
    if(character =='a' || character=='e' || character=='i' || character=='o' || character=='u')
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    string name="I am jon snow the king in the north";
    int vowel_count=0;
    int consonant_count=0;
    int index=0;
    while(name[index]!='\0')
    {
        if(isvowel(&name[index])==true)
        {
            vowel_count++;
        }
        else{
            consonant_count++;
        }
        index++;
    }

    cout<<"the string is :"<<name<<endl;
    cout<<"Vowel count is "<<vowel_count<<endl;
    cout<<"cons<onant count is "<<consonant_count<<endl;
}