#include<math.h>
#include<iostream>
using namespace std; 

int bin_Decimal(int input)
{
    int counter=0; 
    int result=0, remainder; 

    while(input>0)
    {
        remainder = input%10; 
        result = result + remainder*pow(2,counter); 

        counter++; 
        input/=10;
    }

    return result; 
}

int main()
{
    int binary; 
    cout<<"\nEnter a binary number :\n";
    cin>>binary; 

    cout<<"Decimal value is "<<bin_Decimal(binary)<<endl;

    return 0; 
}
