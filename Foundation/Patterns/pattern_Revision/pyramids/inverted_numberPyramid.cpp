#include<iostream>
using namespace std; 

int main()
{
    int size; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int i,j; 

    for(i=size; i>0; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<j; 
        }
        cout<<endl;
    }

    return 0;
}
