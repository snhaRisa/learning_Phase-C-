#include<iostream>
#include<math.h>
using namespace std; 

int dec_Octal(int number)
{
    int remainder, product=1, result=0; 

    while(number>0)
    {
        remainder = number%8; 
        result = result + (remainder*product);

        number/=8;
        product*=10; 
    }

    return result;
}

int main()
{
    int decimal; 
    cout<<"\nEnter decimal number:\n";
    cin>>decimal; 

    cout<<"The octal value is "<<dec_Octal(decimal)<<endl;

    return 0; 
}
