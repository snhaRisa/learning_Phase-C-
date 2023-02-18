#include<iostream>
using namespace std; 

int facto(int number)
{
    int result, facto=1; 
    for(int i=number; i>0; i--)
    {
        facto = facto * i;
    }

    return facto;
}

int coeff(int num1, int num2)
{
    int result; 
    result = facto(num1)/(facto(num1-num2)*facto(num2));

    return result; 
}

int main()
{
    int size, i, j, space;
    cout<<"\nEnter the size:\n"; 
    cin>>size; 

    for(i=0; i<size; i++)
    {
        space = size - i; 
        for(j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(j=0; j<=i; j++)
        {
            cout<<coeff(i, j)<<" ";
        }
        cout<<endl;
    }

    return 0; 
}
