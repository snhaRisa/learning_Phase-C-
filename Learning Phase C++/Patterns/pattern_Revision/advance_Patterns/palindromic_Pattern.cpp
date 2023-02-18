#include<iostream>
using namespace std; 

int main()
{
    int size; 
    int i, j; 

    cout<<"\nEnter the size:\n";
    cin>>size; 

    for(i=1; i<=size; i++)
    {
        for(j=size; j>0; j--)
        {
            if(j<=i)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=2; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl; 
    }

    return 0; 
}
