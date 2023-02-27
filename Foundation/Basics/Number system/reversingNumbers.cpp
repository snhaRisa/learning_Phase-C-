#include<iostream>
using namespace std; 

int main()
{
    int number; 
    cout<<"\nEnter the number to reverse:\n"; 
    cin>>number; 

    int reversed = 0;
    int remainder; 

    for(number; number>0; number = number/10)
    {
        remainder = number%10; 
        reversed = reversed*10 + remainder;  
    }

    cout<<"Reversed number: "<<reversed<<endl;
    
    return 0; 
}
