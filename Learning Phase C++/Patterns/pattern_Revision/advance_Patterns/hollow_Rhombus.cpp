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
            if(j>=i)
            {
                cout<<" ";
            }
        }
        for(j=1; j<=size; j++)
        {
            if(j==1 || j==size || i==1 || i==size)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0; 
}