
#include<iostream>
using namespace std;

template <typename T>
class Queue{

public :
    int n;
    T* arr;
    int front;
    int rear;
    int count;

public :
    Queue()
    {
     n=10;
     arr = new T[n];
     front = 0;
     rear = 0;
     count = 0;

    }
    Queue(int n)
    {
     this->n=n;
     arr = new T[n];
     front = 0;
     rear = 0;
     count = 0;

    }



bool is_full()
{

    if(rear==n)
    {
        return true;
    }
    return false;

}

bool isempty()
{
    if(rear==front)
    {
        return true;


    }
    return false;
}


T enqueue(T data)
{
    if(is_full())
    {
        cout<<"Queue is full ";

    }
    arr[rear]=data;
    rear++;
    count++;
}

T dequeue()
{
    if (!isempty())
    {
        T x = arr [front];
        front++;
        count--;
        return x;

    }
    else {
            cout<<"queue is empty";
    }

}

void print()
{

    for(int i=front;i<rear;i++)
    {
        cout<<arr[i]<<endl;
    }
}



};

int main()
{
   Queue<string>queue;

     queue.enqueue("arif");
     //queue.enqueue("rahim");
     //queue.enqueue("sokal");
    // queue.enqueue("raja");
    // queue.enqueue("arif");
   // queue.enqueue("rahim");
      queue.print();


    //queue.enqueue(10);
   //queue.enqueue(11);
   // queue.enqueue(12);
   // queue.print();
    //enqueue(13);
   //queue. dequeue();
   // queue.dequeue();


  // cout<<"\n count is  "<< queue.count<<endl;



    return 0;

}





















