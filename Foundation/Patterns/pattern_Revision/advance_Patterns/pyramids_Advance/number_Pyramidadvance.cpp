#include<iostream>
using namespace std; 

int main()
{
    int size, i, j, space; 
    cout<<"\nEnter the size:\n"; 
    cin>>size; 

    for(i=1; i<=size; i++)
    {
        space = size-i; 
        for(j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<i<<" "; 
        }
        cout<<endl; 
    }

    return 0; 
}
