#include<iostream>
using namespace std; 

void factors(int number)
{
    int count=1; 
    
    while(count<=number)
    {
        if(number%count == 0)
        {
            cout<<count<<endl; 
        }

        count++;
    }
}

int main()
{
    int num; 
    cout<<"\nEnter the number:\n";
    cin>>num; 

    factors(num);

    return 0; 
}
