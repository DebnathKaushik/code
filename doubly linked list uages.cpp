#include<iostream>
using namespace std;



struct Node
{

  struct Node * Left;
   struct Node * Right;
   int data;

};

void Inorder(struct Node * root)
{
    if (root!=NULL)
    {
        Inorder (root->Left);
        cout<<root->data<<"->";
        Inorder (root->Right);
    }
}

struct Node * newNode(int value)
{
    Node * temp = new Node();
    temp->data=value;
    temp->Right =NULL;
    temp->Left=NULL;
    return temp;

};

struct Node * Insert(Node * root,int value)
{
    if(root==NULL)
    {
        root = newNode(value);
    }
    else if (value < root->data)
    {
        root->Left = Insert(root->Left,value);
    }
    else
    {
        root->Left = Insert(root->Left,value);
    }
    return root;

};

int main ()
{
    struct Node * root = NULL;
    root = Insert(root,10);
    root = Insert(root,5);
    root = Insert(root,3);


    Inorder(root);
    return 0;


}
