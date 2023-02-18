#include<iostream>
#include<math.h>
using namespace std; 

void prime_Number(int number)
{
    int i=2, check=0, temp=number; 
    
    for(i; i<=sqrt(number); i++)
    {
        if(number%i == 0)
        {
            check = 1; 
            break;
        }
        else
        {
            continue; 
        }
    }

    if(check == 0)
    {
        cout<<number<<endl;
    }
}

int main()
{
    int num1, num2, count;

    cout<<"\nEnter the number range:\n";
    cin>>num1>>num2; 

    cout<<"Prime numbers :\n";

    for(count=num1; count<=num2; count++)
    {   
        prime_Number(count);
    }

    return 0; 
}
