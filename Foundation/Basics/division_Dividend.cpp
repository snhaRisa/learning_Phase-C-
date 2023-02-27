#include<iostream>
using namespace std;

int main()
{
    int divisor,dividend, quotient, remainder;
    cout<<"Enter divisor & dividend respectively : "<<endl;
    cin>>divisor>>dividend;
    //cout<<divisor<<"\n"<<dividend;

    /*calculating remainder and quotient*/
    quotient = dividend/divisor;
    remainder = dividend%divisor;

    cout<<"The quotient is : "<<quotient<<endl;
    cout<<"The remainder is : "<<remainder<<endl;
    
    //calculating size of integer
    cout<<sizeof(divisor);

    return 0;
}