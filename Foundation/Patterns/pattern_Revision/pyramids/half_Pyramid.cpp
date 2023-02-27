#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"\nEnter the number for the pyramid:\n";
    cin>>num; 

    int i=1, j=1;

    for(i; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }

    return 0; 
}
