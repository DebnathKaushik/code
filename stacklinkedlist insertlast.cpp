
#include<iostream>
using namespace std;
struct Node{

int data;
struct Node * next;

};

struct  Node *head = NULL;
struct  Node *tail = NULL;


void insertatbeginning(int value)
{
 struct Node *n1;
 n1 = new Node();
 n1->data = value;
 n1->next = NULL;

 if(head==NULL){

    head=n1;
 }
 else
 {
     n1->next=head;
     head=n1;
 }

}

void insertatend(int value)
{
 struct Node *n1;
 n1 = new Node();
 n1->data = value;
 n1->next = NULL;

 if(head==NULL){

    head=n1;
 }
 else
 {
      struct Node *temp = head;
    while(temp->next!=NULL)
    {

        temp = temp->next;
    }

    temp->next=n1;
 }

}



void deletfrombeginning()
{
    struct Node * temp = head;
    head = temp->next;
    delete(temp);
}

void traversal()
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    cout<<".............."<<endl;

}

int top()
{
    return head->data;
}

int tell()
{
     struct Node *temp = head;
    while(temp->next!=NULL)
    {

        temp = temp->next;
    }

    return temp->data;

}

void deletefromend()
{
    Node * temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;

    }
    temp->next=NULL;

    delete temp;

}









int main(){


insertatbeginning(10);
insertatbeginning(20);
traversal();
insertatend(30);
insertatbeginning(40);
traversal();
cout<<"top is "<<top()<<endl;
cout<<"tail is "<<tell()<<endl;
deletefromend();

return 0;

}

