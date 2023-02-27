#include<iostream>
using namespace std; 

void fib_Series(int number)
{
    int num_1, num_2, sum=0, count = 1; 
    num_1 = 0; 
    num_2 = 1; 
    
    cout<<"0, 1, ";
    for(count; count<=(number-2); count++)
    {
        sum = num_1 + num_2; 
        cout<<sum<<", "; 
        num_1 = num_2; 
        num_2 = sum; 
    }
}

int main()
{
    int num; 
    cout<<"\nEnter the size of sequence:\n";
    cin>>num;

    fib_Series(num);

    return 0; 
}
