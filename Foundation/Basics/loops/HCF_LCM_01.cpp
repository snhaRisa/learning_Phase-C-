#include<iostream>
using namespace std; 

int main()
{
    int hcf, lcm, num1, num2; 
    int divisor, dividend, quotient, remainder;
    bool test; 

    cout<<"\nEnter two numbers:\n";
    cin>>num1>>num2; 

    if(num1>num2)
    {
        divisor = num2;
        dividend = num1; 
    }
    else
    {
        divisor = num1;
        dividend = num2;  
    }

    while(test=true)
    {
        remainder = dividend/divisor;

        if(remainder == 0)
        {
            hcf = divisor;
            test = false; 
            break;
        }
        else
        {
            divisor = remainder;
            dividend = divisor;
        }
    }

    cout<<"HCF: "<<hcf<<endl;

    return 0; 
}
