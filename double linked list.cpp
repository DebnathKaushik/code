#include<iostream>
using namespace std;



struct Node * root=NULL;
struct Node
{
    struct Node * Left;
    int data;
    struct Node * Right;

};


int main()
{
    struct Node * n1 = new Node();
    n1->Left=NULL;
    n1->data=10;
    n1->Right=NULL;

   cout<<n1->data<<" "<<endl;

    struct Node * n2 = new Node();
    n1->Left=NULL;
    n1->data=5;
    n1->Right=NULL;

    n1->Left=n2;

    struct Node * n3 = new Node();
    n1->Left=NULL;
    n1->data=20;
    n1->Right=NULL;

    n1->Right=n3;


    struct Node * tempL = n1;

    while(tempL!= NULL)
    {

        cout<<tempL->data<<" ";
        tempL = tempL->Left;
    }






   return 0;


}
