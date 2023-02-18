#include<iostream>
using namespace std;

int main()
{
    int number, sum;
    cout<<"Enter any number to get the sum : ";
    cin>>number;

    int i = 1;
    sum = 0;
    while(i<=number)
    {
        sum = sum + i;
        i++;
    }

    cout<<"The sum is "<<sum<<endl;

    return 0;
}