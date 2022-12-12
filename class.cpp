
#include<iostream>
using namespace std;


    class Student {

 private:
    int id;
    string name;
    int cgpa;

 public:










int main(){
    Student s[2];
    for(int i=0;i<2;i++)
    {
        cout<<"enter 3 things :";
        cin>>s[i].id>>s[i].name>>s[i].cgpa;
    }

    for(int i=0;i<2;i++)
    {
        cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].cgpa<<endl;
    }




return 0;
}
