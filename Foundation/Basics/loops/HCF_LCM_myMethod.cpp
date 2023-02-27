#include<iostream>
using namespace std; 

int main ()
{
    int num1, num2, hcf, lcm; 
    cout<<"\nEnter the numbers:\n";
    cin>>num1>>num2;

    int small;
    if(num1>num2)
    {
        small = num2;
    }
    else
    {
        small = num1; 
    }

    int i=small;
    for(i; i>0; i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
        else
        {
            continue; 
        }
    }

    lcm = (num1*num2)/hcf;

    cout<<"HCF : "<<hcf<<"\nLCM : "<<lcm;

    return 0;
}
