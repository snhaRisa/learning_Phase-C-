#include<math.h>
#include<iostream>
using namespace std; 

int oct_Decimal(int number)
{
    int remainder; 
    int counter=0;
    int result=0; 

    do
    {
        remainder = number%10; 
        result = result + remainder*pow(8,counter);
        counter++; 
        number/=10; 
    }
    while(number>0);

    return result; 
}

int main()
{
    int input; 
    cout<<"\nEnter the octal number:\n"; 
    cin>>input; 

    cout<<"Decimal value is "<<oct_Decimal(input)<<endl; 

    return 0; 
}
