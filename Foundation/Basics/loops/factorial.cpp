#include<iostream>
using namespace std; 

int main()
{
    int number, facto=1, i;
    cout<<"\nEnter the number:\n";
    cin>>number; 

    for(i=number; i>0; i--)
    {
        facto = facto * i; 
    }

    cout<<"The factorial is "<<facto<<endl;

    return 0;
}
