#include<iostream>
using namespace std;

int main()
{
    int n, i, j, space;
    cout<<"\nEnter the size:\n";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        space = n-i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}