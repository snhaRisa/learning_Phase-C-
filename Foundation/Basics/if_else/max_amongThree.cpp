#include<iostream>
using namespace std;

int main ()
{
    int num1, num2, num3;
    cout<<"\nEnter the numbers:\n";
    cin>>num1>>num2>>num3;

    //cout<<"The numbers are:\n"<<num1<<"\n"<<num2<<"\n"<<num3<<endl;

    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"Maximum is number "<<num1<<endl;
        }
        else
        {
            cout<<"Maximum is number "<<num3<<endl; 
        }
    }
    else if(num2>num1)
    {
        if(num2>num3)
        {
            cout<<"Maximum is number "<<num2<<endl;
        }
        else
        {
            cout<<"Maximum is number "<<num3<<endl; 
        }
    }
    else
    {
        cout<<"Maximum is number "<<num3<<endl; 
    }
    
    return 0;   
}
