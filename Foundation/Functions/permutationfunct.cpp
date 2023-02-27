#include<iostream>
#include<math.h>
using namespace std; 

int facto(int input)
{
    int count=input, fact=1; 
    while(count>0)
    {
        fact = fact * count;
        count--;
    }

    return fact;
}

int per(int number1, int number2)
{
    int result; 
    result = facto(number1)/facto(number1-number2);

    return result;  
}

int main()
{
    int num1, num2; 
    cout<<"\nEnter the number for Permutation:\n";
    cin>>num1>>num2; 

    cout<<"Permutation is "<<per(num1, num2)<<endl;

    return 0;
}
