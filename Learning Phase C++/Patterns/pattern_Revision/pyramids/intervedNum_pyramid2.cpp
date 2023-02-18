#include<iostream>
using namespace std; 

int main()
{
    int size; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int i, j; 

    for(i=1; i<=size; i++)
    {
        for(j=i; j<=size; j++)
        {
            cout<<i; 
        }
        cout<<endl;
    }

    return 0; 
}
