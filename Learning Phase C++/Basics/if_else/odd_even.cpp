#include<iostream>
using namespace std; 

int main ()
{
    int number; 
    cout<<"\nEnter the number:\n";
    cin>>number; 

    if(number%2==0)
    {
        cout<<"Even Number\n";
    }
    else
    {
        cout<<"Odd Number\n";
    }

    return 0;
}
