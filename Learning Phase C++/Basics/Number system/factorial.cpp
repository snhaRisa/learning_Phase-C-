#include<iostream>
using namespace std;

int main ()
{
    int num;
    cout<<"\nEnter the number for its Factorial:\n"; 
    cin>>num; 

    int i=1, facto=1; 

    for(i; i<=num; i++)
    {
        facto = facto * i; 
    }

    cout<<"The factorial of the number is "<<facto<<endl; 

    return 0; 
}
