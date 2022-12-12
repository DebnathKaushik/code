#include<iostream>
using namespace std;

struct Student {


    int id;
    string name;
    double cgpa;
};



int main()
{
    Student s1 = {1,"Kaushik",3.8};
    cout<<s1.id<<" "<<s1.name<<" "<<s1.cgpa;    // struct (class)

    return 0;
}
