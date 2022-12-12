#include<iostream>
using namespace std;

struct company{

char name[10];   // charcter ar length / okkhor koita [2]
int id ;
float salary;

};



int main()
{
    company c1[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout <<"student  : " << i+1<< endl;
        cout << " enter name "<<endl;
        cin >> c1[i].name;
        cout << " enter id "<<endl;
        cin >> c1[i].id;
        cout << " enter salary "<<endl;
        cin >> c1[i].salary;
    }

    for(i=0;i<5;i++)
    {
        cout<<"student" << i+1<< endl;
        cout<< c1[i].name<<endl;
        cout<< c1[i].id<<endl ;
        cout<< c1[i].salary <<endl ;
    }









  return 0;
}


