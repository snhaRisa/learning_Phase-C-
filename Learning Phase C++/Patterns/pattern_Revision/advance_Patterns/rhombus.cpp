#include<iostream>
using namespace std; 

int main()
{
    int size, i, j; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int count = size; 

    for(i=size; i>0; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=size; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0; 
}
