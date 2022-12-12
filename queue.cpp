#include<iostream>
using namespace std;
#define size 3
int Queue[size];
int f=-1;
int r=-1;                  // when f/r =-1 ,then Queue is empty.

void enqueue(int data)
{
    if(r==size-1)                  // isfull ar funtionality.
    {
       cout<<"Queue is full or overflow \n";
    }

    else if (r==-1&&f==-1)        // isempty ar funtionality.
    {
        r=f=0;
        Queue[r]=data;
    }
    else
    {
        r++;
        Queue[r]=data;
    }
}

void dequeue()
{
    if(r==-1&&f==-1)
    {
        cout<<"Queue is empty or underflow ";
    }

    else if (r==f)
    {
        r=f=-1;

    }

    else
    {

       f++;

    }
}

void print()
{
    for(int i=f;i<=r;i++)
    {
        cout<<Queue[i]<<endl;
    }
}




int main ()
{
    enqueue(7);
    enqueue(9);
    enqueue(8);
    enqueue(5);
    dequeue();
    dequeue();
    print();
    //dequeue();
    //print();

    return 0;

}



