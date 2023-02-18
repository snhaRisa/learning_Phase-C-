#include<iostream>
using namespace std;

void display(int number)
{
    cout<<"echo:"<<number<<endl;
}

int main()
{
    int num;
    cout<<"\nEnter the number:\n";
    cin>>num;
    display(num);

    return 0;
}

