#include<iostream>
using namespace std;

int main()
{
    int year; 
    cout<<"\nEnter the year:\n";
    cin>>year;

    if(year%400 == 0)
    {
        cout<<"It's Leap Year\n";
    }
    else if (year%100 == 0)
    {
        cout<<"Not Leap Year\n";
    }
    else if (year%4 == 0)
    {
        cout<<"It's Leap Year\n";
    }

    return 0;
}
