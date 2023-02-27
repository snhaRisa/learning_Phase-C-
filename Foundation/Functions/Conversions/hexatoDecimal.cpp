//incomplete code. Need to learn more to understand and code. 

#include<iostream>
#include<math.h>
using namespace std; 

void hex_Decimal(int number)
{
    cout<<"Num"<<number<<endl;
    int remainder;
    int result=0; 
    int counter=0; 

    while(number>0)
    {
        remainder=number%10; 
        cout<<"Rem"<<remainder<<endl;
        if(remainder == 'A' ||  remainder == 'B' || remainder == 'C' || remainder == 'D' || remainder == 'E' || remainder == 'F')
        {
            remainder = int(remainder)-55; 
            cout<<remainder;
        }
        result = result + remainder*pow(16, counter);

        counter++; 
        number/=10;
    }

    cout<<"The Decimal value is "<<result<<endl; 
}

int main()
{
    int hexa; 
    cout<<"\nEnter the Hexadecimal number:\n"; 
    cin>>hexa; 

    hex_Decimal(hexa); 
    
    return 0; 
}
