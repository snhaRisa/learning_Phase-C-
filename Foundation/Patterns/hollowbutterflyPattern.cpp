#include<iostream>
using namespace std;

int main()
{
    int n, i, j, space;
    cout<<"\nEnter the number for pyramid:\n";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        space = n-i;
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            ;if(j==1 || j==i)
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

    for(i=n;i>0;i--)
    {
        space = n-i;
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
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