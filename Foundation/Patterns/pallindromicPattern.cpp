#include<iostream>
using namespace std;

int main()
{
    int n, i, j, space;
    cout<<"\nEnter the number for pattern : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        space = n-i;
        if(space>0)
        {
            for(j=1;j<=space;j++)
            {
                cout<<" ";
            }
            for(j=n-(n-i);j>0;j--)
            {   
                cout<<j;
            }
            for(j=2;j<=i;j++)
            {   
                cout<<j;
            }
            for(j=1;j<=space;j++)
            {
                cout<<" ";
            }   
        }
        else
        {
            for(j=n;j>0;j--)
            {
                cout<<j;
            }
            for(j=2;j<=i;j++)
            {
                cout<<j;
            }
        }

        cout<<endl;
    }

    return 0;
}