#include<iostream>
using namespace std;
                               // class diye
class stack{
private:
    int top;
    int *arr;
    int size;
public :
    stack(int n);
    top=-1;
    size=n;
    arr = new int [n];

    void push(int data)
{
    if(isfull())
    {
        cout<<"stack overflow"<<endl;
    }

    else{top++;
    arr[top]= data;
    }
}
 void print()
 {
     for(int i=top;i>=0;i--)
     {
         cout<<arr[i]<<endl;
     }

 }

 bool isempty()
 {
     if(top<0)
        {
            return true;
        }
            return false;
 }




 int pop()
 {
     if(isempty())
     {
         cout<<"stack underflow"<<endl;
     }


     else{int value = arr[top];
     top--;
     return value;
     }
 }

};
int main()
{
    int n;

    cout<<"enter size "<<endl;
    cin<<n;
    stack s1(n);


     s1.push(10);
     s1.push(20);
    // push(30);
     //push(40);
     //push(50);
     //push(60);
     //push(70);
     //int result1 = pop();
     //int result2 =pop();

     //pop();
    // pop();
     //pop();


     print();
     cout<<top<<endl;
     return 0;


}
