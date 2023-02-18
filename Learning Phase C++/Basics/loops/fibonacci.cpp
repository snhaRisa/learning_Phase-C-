#include<iostream>
using namespace std; 

int main()
{
    int num1=0, num2=1, i=1, sum, num; 

    cout<<"\nEnter number for till series\n";
    cin>>num;

    cout<<"Fibonacci Series :\n";
    cout<<"0, 1, ";

    for(i; i<=(num-2); i++)
    {      
        sum = num1 + num2;

        cout<<sum<<", ";

        num1 = num2;
        num2 = sum; 
    }

    return 0; 
}
