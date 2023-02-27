#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    int number;
    bool count = false;  
    cout<<"\nEnter the number:\n";
    cin>>number; 

    for(int i=2; i<sqrt(number); i++)
    {
        if(number%i==0)
        {
            count = true;
            break;  
        }
        else
        {
            continue; 
        }
    }

    if(count = true)
    {
        cout<<"Prime number\n"; 
    }
    else
    {
        cout<<"Not Prime\n"; 
    }

    return 0; 
}
