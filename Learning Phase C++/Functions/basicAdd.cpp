#include<iostream>
using namespace std; 

int addition(int number1, int number2)
{
    int result; 
    result = number1 + number2; 

    return result; 
}

int main()
{
    int num1, num2; 
    cout<<"\nEnter the numbers to Add:\n"; 
    cin>>num1>>num2;

    cout<<addition(num1, num2)<<endl;

    return 0; 
}
