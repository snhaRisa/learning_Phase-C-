#include<iostream>
using namespace std; 

int main()
{
    int size, i, j;
    cout<<"\nEnter the size:\n"; 
    cin>>size; 

    for(i=1; i<=size; i++)
    {
        for(j=size; j>0; j--)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1; i<=size; i++)
    {
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
        for(j=2; j<=size; j++)
        {
            if(j>i)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    return 0; 

}
