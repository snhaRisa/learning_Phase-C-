#include<iostream>
using namespace std;

int main()
{
    int n, m, i, j;
    cout<<"\nEnter the number for half pyramid diagram : ";
    cin>>n;
    

    for(i=n; i>0; i--)
    {
        for(j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}