#include<iostream>
using namespace std; 

string check(int input)
{
    if(input>=18)
    {
        return "Valid";
    }
    else
    {
        return "Not Eligible"; 
    }
}

int main()
{
    int age; 
    cout<<"\nEnter your age:\n";
    cin>>age; 

    cout<<check(age)<<endl;

    return 0; 
}
