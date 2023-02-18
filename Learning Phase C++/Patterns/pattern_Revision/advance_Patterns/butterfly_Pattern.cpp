#include<iostream>
using namespace std; 

int main()
{
    int size, i, j, space; 
    cout<<"\nEnter the size:\n"; 
    cin>>size; 

    for(i=1; i<=size; i++)
    {
        space = size - i; 
        for(j=1; j<=i; j++)
        {
            cout<<"*"; 
        }
        for(j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=space; j++)
        {
            cout<<" "; 
        }
        for(j=1; j<=i; j++)
        {
            cout<<"*"; 
        }
        cout<<endl; 
    }
    for(i=1; i<=size; i++)
    {
        for(j=size; j>0; j--)
        {
            if(j>=i)
            {
                cout<<"*";
            }    
            else
            {
                cout<<" "; 
            }
        }
        for(j=1; j<=size; j++)
        {
            if(j>=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" "; 
            }
        }
        cout<<endl; 
    }

    return 0;
}
