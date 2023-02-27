#include<iostream>
#include<math.h>
using namespace std; 

int dec_Binary(int number)
{
    int result = 0, remainder, product = 1; 
    
    while(number>0)
    {
        remainder = number % 2; 
        result = result + (remainder * product);
        number/=2;
        product*=10; 
    }

    return result; 
}

int main()
{
    int decimal; 
    cout<<"\nEnter the Decimal value:\n";
    cin>>decimal; 

    cout<<"The binary value is : "<<dec_Binary(decimal)<<endl;

    return 0; 
}
