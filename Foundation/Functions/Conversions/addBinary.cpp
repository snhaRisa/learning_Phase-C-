#include<iostream>
#include<math.h>
using namespace std; 

int bin_Decimal(int number)
{
    int remainder, result=0, counter=0;

    while(number>0)
    {
        remainder = number%10; 
        result = result + (remainder*pow(2,counter)); 
        counter++; 
        number/=10; 
    }

    return result; 
}

int dec_Binary(int input)
{
    int remainder, result=0, product=1; 
    
    while(input>0)
    {
        remainder = input%2;
        result = result + (remainder * product);
        input/=2;
        product*=10; 
    }

    return result;
}

int main()
{
    int binary_1, binary_2, dec_1, dec_2, sum;

    cout<<"\nEnter two binary numbers:\n";
    cin>>binary_1>>binary_2; 

    /*convert to decimal, add & then reconvert the result to binary*/
    dec_1 = bin_Decimal(binary_1);
    dec_2 = bin_Decimal(binary_2);
    
    sum = dec_1 + dec_2;
    cout<<"Result is "<<dec_Binary(sum)<<endl;

    return 0; 
}
