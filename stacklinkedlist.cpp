#include<iostream>
using namespace std;
struct Node{

int data;
struct Node * next;

};

struct  Node *head = NULL;

void push(int value)
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
void pop()
{
    struct Node * temp = head;
    head = temp->next;
    delete(temp);
}

void printstack()
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    cout<<".............."<<endl;

}

int stacksize()
{
    int count = 0;

    struct Node * temp = head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;

}

int top()
{
    return head->data;
}

int sumstack()
{
    int count = 0;

    struct Node * temp = head;
    while(temp!=NULL)
    {
        count= count+temp->data;
        temp = temp->next;
    }
    return count;

}







int main(){


push(10);
push(20);
push(30);
push(40);
push(50);
printstack();
cout<<stacksize()<<endl;
pop();
printstack();
cout<<top()<<endl;
cout<<sumstack()<<endl;
cout<<sumstack()/(double)stacksize();



return 0;

}

