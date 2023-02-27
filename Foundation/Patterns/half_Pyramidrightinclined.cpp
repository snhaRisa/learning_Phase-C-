#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"\nEnter the number for pyramid : ";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=0;j<=n;j++)
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