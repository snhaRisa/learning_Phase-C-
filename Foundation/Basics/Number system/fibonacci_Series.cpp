#include<iostream>
using namespace std;

int main ()
{
    int num1 = 0, num2 = 1;
    int i = 1, limit, sum = 0;

    cout<<"\nEnter the limit:\n";
    cin>>limit;

    if(limit<=2)
    {
        cout<<"0,1";
    }
    else
    {
        cout<<"0,1,";
        for(i=1;i<=(limit-2); i++)
        {
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
            if(i==(limit-2))
            {
                cout<<sum;    
            }
            else
            {
                cout<<sum<<",";
            }
            
        }
    }
    
    return 0;
}