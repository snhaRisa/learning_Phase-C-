#include<iostream>
using namespace std; 

int facto(int num)
{
    int count, fact=1; 
    for(count=1; count<=num; count++)
    {
        fact = fact*count;
    }

    return fact;
}

int main()
{
    int number; 
    cout<<"\nEnter the number for its Factorial : ";
    cin>>number;

    cout<<facto(number)<<endl; 

    return 0; 
}
