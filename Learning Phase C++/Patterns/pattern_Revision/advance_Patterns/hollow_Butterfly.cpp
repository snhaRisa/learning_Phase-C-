#include<iostream>
using namespace std; 

int main()
{
    int size, i, j, space; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    for(i=1; i<=size; i++)
    {
        space = size-i;

        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for(j=1; j<=space; j++)
        {
            cout<<"  ";
        }

        for(j=1; j<=space; j++)
        {
            cout<<"  ";
        }
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl; 
    }

    for(i=size; i>0; i--)
    {
        for(j=1; j<=size; j++)
        {
            if(j==1 || j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  "; 
            }
        }
        for(j=size; j>0; j--)
        {
            if(j==i || j==1)
            {
                cout<<"* ";
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
