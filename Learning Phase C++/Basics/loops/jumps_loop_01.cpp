#include<iostream>
using namespace std; 

int main ()
{
    int num; 
    cout<<"\nEnter the number:\n";
    cin>>num; 
    
    int i=0; 
    for (i; i<num; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            cout<<i<<", "; 
        }
    }

    return 0;
}
