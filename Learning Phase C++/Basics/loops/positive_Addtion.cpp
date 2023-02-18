#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter Number to Start : "<<endl;
    cin>>n;

    while(n>=0)
    {
        sum = sum + n;
        cout<<"Enter new number : "<<endl;
        cin>>n;
    }

    cout<<"Total sum of positive numbers : "<<sum<<endl;

    return 0;
}