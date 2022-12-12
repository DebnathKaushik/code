#include<iostream>
using namespace std;


int square(int x)
{
    return x*x;
}

int sum(int x,int y)
{
    return x+y;
}


int main()
{
    int a = 4;
    int b = 5;


    cout<<"square is "<<square(b)<<endl;
    cout<<"sum is "<<sum(a,b)<<endl;
    cout<<square(sum(a,b))<<endl;

    cout<<sum(square(a),square(b))<<endl;


    return 0;

}
