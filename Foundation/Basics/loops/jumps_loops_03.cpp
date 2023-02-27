#include<math.h>
#include<iostream>
using namespace std; 

void prime_Number(int number)
{
    int i, count=0;
    for(i=2; i<sqrt(number); i++)
    {
        if(number%i==0)
        {   
            count = 1; 
            break;
        }
        else
        {
            continue; 
        }
    }

    if(count == 0)
    {
        cout<<"Prime Number:"<<number<<endl; 
    }
}

int main()
{
    int num1, num2, counter; 
    cout<<"\nEnter the range:\n"; 
    cin>>num1>>num2; 

    for(counter=num1; counter<=num2; counter++)
    {
        prime_Number(counter);
    }

    return 0; 
}
