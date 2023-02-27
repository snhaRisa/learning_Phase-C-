#include<iostream>
using namespace std; 

void is_Natural(int number, int number1)
{
    int sum = 0;
    while(number<=number1)
    {
        sum += number;
        number++; 
    }

    cout<<"The sum is "<<sum<<endl;
}

int main()
{
    int num1, num2; 
    cout<<"\nEnter the range:\n"; 
    cin>>num1>>num2; 

    is_Natural(num1, num2);

    return 1; 
}
