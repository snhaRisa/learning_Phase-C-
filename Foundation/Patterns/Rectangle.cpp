#include<iostream>
using namespace std;

int main()
{
    int rows, cols, i,j;
    cout<<"\nEnter the number of rows and columns : ";
    cin>>rows>>cols;

    for(i=0;i<rows;i++)
    {
        cout<<"\n";
        for(j=0;j<cols;j++)
        {
            cout<<"*";
        }
    }

    return 0;
}