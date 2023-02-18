#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    int number, i=2;
    bool flag = 0; 
    cout<<"\nEnter the number:\n"; 
    cin>>number; 

    for(i; i<=sqrt(number); i++)
    {
        if(number%i==0)
        {
            cout<<"Not-Prime\n";
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }

    if(flag == 0)
    {
        cout<<"Prime\n";
    }

    return 0; 
}
