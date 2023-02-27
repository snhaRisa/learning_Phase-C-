#include<iostream>
using namespace std; 

void swapingfunction(int a, int b)
{
    int temporary;
    temporary = a;
    a = b; 
    b = temporary;

    cout<<"The numbers are as :\nNumber_1 = "<<a<<"\nNumber_2 = "<<b<<endl;
}

int main()
{
    int num_1, num_2; 
    cout<<"\nEnter the numbers to swap:\n"; 
    cin>>num_1>>num_2; 

    cout<<"The numbers are as :\nNumber_1 = "<<num_1<<"\nNumber_2 = "<<num_2<<endl; 

    swapingfunction(num_1, num_2);

    return 0; 
}
