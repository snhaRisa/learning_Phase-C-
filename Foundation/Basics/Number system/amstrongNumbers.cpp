#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    int num, temp, newNum=0;
    cout<<"\nEnter the number:\n"; 
    cin>>num; 

    temp = num; 

    int remainder; 
    while(num>0)
    {
        remainder = num % 10; 
        newNum = newNum + pow(remainder, 3);

        num/=10; 
    }

    if(newNum==temp)
    {
        cout<<"Armstrong Number\n";
    }
    else
    {
        cout<<"Not Armstrong Number\n";
    }

    return 0; 
}
