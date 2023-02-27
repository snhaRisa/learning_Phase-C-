#include<iostream>
using namespace std; 

int main()
{
    int num, i, j;
 
    cout<<"\nEnter the size:\n"; 
    cin>>num; 

    for(i=num; i>0; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"#";
        }
        cout<<endl; 
    }

    return 0;
}
