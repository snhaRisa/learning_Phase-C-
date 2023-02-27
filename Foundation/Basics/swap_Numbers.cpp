#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;
    cout<<"x is "<<x<<" & y is "<<y<<endl;
    
    /*logic of swapping numbers using external variable*/
    z = x;
    x = y;
    y = z;

    cout<<"Now, x is "<<x<<" & y is "<<y<<endl;

    return 0;
}