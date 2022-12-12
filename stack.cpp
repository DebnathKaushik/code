#include<iostream>
using namespace std;

    template<typename T>
    class Stack{

private:
    int top;
    T *a;
    int s;
public:N
     Stack(int n){
         top=-1;
         s=n;
         a = new T[n];
    }
     bool isfull()
     {
         if(top==s-1)
         {
             return true;
         }

         return false;

     }

     void push(T data)
     {
         if (isfull()){
            cout<<"stack overflow\n";
         }
         else
         {
             top++;
             a[top]=data;
         }
     }
    void print(){
    for(int i=top;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    cout<<"\n";
    }

    bool isempty()
    {
        if(top<0)
        {
            return true;
        }
        return false;
    }

    T pop()
    {

        if(isempty())
        {
            cout<<"stack underflow";
        }
        else
        {
            T value = a[top];
            top--;
            return value;
        }


    }

    } ;


int main(){



int n ;
cout<<"enter the number of stack: ";
cin>>n;
Stack<string>s(n);
//Stack<char>s(n);

s.push("karim");
s.push("rarim");
s.push("parim");
   //s.push('b');
   //s.push('c');
   //s.push('d');
s.print();

return 0;
}
