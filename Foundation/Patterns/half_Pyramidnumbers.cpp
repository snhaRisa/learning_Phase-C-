#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout<<"\nEnter the number for simple pyramid : ";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}