#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"\nEnter the number for the size:\n"; 
    cin>>num; 

    int i, j; 
    
    for(i=1; i<=num; i++)
    {
        for(j=num; j>i; j--)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }

    return 0;
}
