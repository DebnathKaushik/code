
#include<iostream>
using namespace std;

struct Student {


    int id;
    string name;
    double cgpa;
};



int main()
{
    Student s = {1,"Kaushik",3.8};              //stak  //structer and pointer
    cout<<s.id<<" "<<s.name<<" "<<s.cgpa<<endl;

    Student *p;
    p = &s;
    cout<<p->id<<" "<<(*p).name<<" "<<(*p).cgpa<<endl;


    Student *s1 = new Student();                  // heap memory(pointer thakle (->) use korbo)
    cin>>s1->id >>s1->name>>s1->cgpa;
    cout<<s1->id<<" "<<s1->name<<" "<<s1->cgpa;


    return 0;
}
