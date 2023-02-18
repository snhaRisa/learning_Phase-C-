#include<iostream>
using namespace std;

int main()
{
    int n, i, j, space;
    cout<<"\nEnter the number for pattern:\n";
    cin>>n;

    for(i=n;i>0;i--)
    {
        space = n-i;
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=space;j>0;j--)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        space = n-i;
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=space;j>0;j--)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}