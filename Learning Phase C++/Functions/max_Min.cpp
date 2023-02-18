#include<iostream>
using namespace std; 

void check_Max(int num_1, int num_2, int num_3)
{
    if(num_1>=num_2 && num_1>=num_3)
    {
        cout<<num_1<<" is greatest.\n";
        if(num_2>num_3)
        {
            cout<<num_3<<" is smallest.\n";
        }
        else
        {
            cout<<num_2<<" is smallest.\n";
        }
    }
    else if(num_2>=num_3 && num_2>=num_1)
    {
        cout<<num_2<<" is greatest.\n";
        if(num_1>num_3)
        {
            cout<<num_3<<" is smallest.\n";
        }
        else
        {
            cout<<num_1<<" is smallest.\n";
        }   
    }
    else
    {
        cout<<num_3<<" is greatest.\n";
        if(num_2>num_1)
        {
            cout<<num_1<<" is smallest.\n";
        }
        else
        {
            cout<<num_2<<" is smallest.\n";
        }
    }
    
}

int main()
{
    int num1, num2, num3; 
    cout<<"\nEnter the three numbers:\n";
    cin>>num1>>num2>>num3; 

    check_Max(num1, num2, num3);

    return 0; 
}
