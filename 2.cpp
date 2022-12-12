// topic ---> stack implematation array / dynamic

#include<iostream>
using namespace std;

#define n 5
int arr[n];
int top = -1; // for track
 
bool isfull(){

   if(top==n-1)    // array index n-1--->(max)
   {
       return true;
   }

return false;

}



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





 int main()
 {
     push(10);
     push(20);
    // push(30);
     //push(40);
     //push(50);
     //push(60);
     //push(70);
     //int result1 = pop();
     //int result2 =pop();

     pop();
     pop();
     pop();


     print();
     cout<<top<<endl;





     return 0;



 }
