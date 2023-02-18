#include<iostream>
using namespace std; 

int main()
{
    int size; 
    cout<<"\nEnter the size : ";
    cin>>size; 

    int i, j; 

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {   
            if(j<=(size-i))
            {
                cout<<" ";
            }
            else
            {
                cout<<"#"; 
            }
        }
        cout<<endl; 
    }

    return 0; 
}
