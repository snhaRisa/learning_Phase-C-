#include<iostream>
using namespace std; 

int main()
{
    int num;
    cout<<"Enter the number:\n"; 
    cin>>num; 

    int factor=1; 
    for (factor; factor<=num; factor++)
    {
        if(num%factor==0)
        {
            cout<<factor<<" "; 
        }
    }
}
