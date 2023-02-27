#include<iostream>
using namespace std;

int reversing(int num)
{
    int remainder, quotient, counter, reverse=0; 
    
    for(num; num>0; num/=10)
    {
        remainder = num%10; 
        reverse = reverse * 10+remainder;  
    }

    return reverse; 
}

int main()
{
    int number; 
    cout<<"\nEnter the number to reverse:\n";
    cin>>number; 

    cout<<reversing(number);

    return 0; 
}
