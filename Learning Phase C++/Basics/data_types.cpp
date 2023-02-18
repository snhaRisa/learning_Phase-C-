#include<iostream>
using namespace std;

int main()
{
    /*There are three types of data types.
    They are as follows:
    1.)Primitive
        > int, char, float, double, bool (with their variations another types)
    2.)Derived
        > functions, arrays etc.
    3.)User Defined
        > enum, structure etc. */

    int num1;
    signed int num2;
    long int num3;
    short int num4;

    char alpha;
    char beta[20];

    float dec1;
    double dec2;

    bool val;

    num1 = 20;
    num2 = 10;
    num3 = 9999898;
    num4 = 66;

    alpha = 'R';
    
    dec1 = 99.89;
    dec2 = 666.78728728;

    val = true;

    cout<<num1<<'\n'<<num2<<'\n'<<num3<<'\n'<<num4<<'\n'<<dec1<<'\n'<<dec2<<'\n'<<val<<'\n'<<alpha;

    return val;
}