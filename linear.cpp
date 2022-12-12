//topic ---->

//linear serch

#include<iostream>
using namespace std;

int Linearsearch(int m[],int size,int item)   // int *m also work
{
    for(int i=0;i<size;i++)
    {
        if(m[i]==item)
        {
            return i;
        }

    }

    return -1;

}

int main()
{
    //int a[10]= {10,20,30,40,50,60,70,80,90,1};
    int b ;
    cout<< "enter size of your array : ";
    cin>>b;

    int *a = new int[b];
    //int *a = (int*)malloc(b*sizeof(b));
    //int *a = (int*)calloc(b,sizeof(b));    // same

    cout<<"Enter element of the array : "<<endl;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];

    }

    for(int i=0;i<b;i++)
    {
        cout<<a[i]<< " "<<endl;

    }

    int item ;
    cout<<"You are serching item: ";
    cin>>item;

   int check = Linearsearch(a,b,item);
   if(check==-1)
   {
       cout<<"Item not found ";
   }

    else
    {
        cout<<"Item found in: "<<check<<" index";

    }

    return 0;

}



