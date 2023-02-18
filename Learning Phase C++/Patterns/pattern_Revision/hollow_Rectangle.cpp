#include<iostream>
using namespace std; 

int main()
{
    int rows, cols, i, j;
    cout<<"\nEnter the rows and cols:\n"; 
    cin>>rows>>cols; 

    for(i=1; i<=cols; i++)
    {
        for(j=1; j<=rows; j++)
        {
            if(j==1 || j==rows || i==1 || i==cols)
            {
                cout<<"*";
            }
            else
            {
                cout<<" "; 
            }
        }
        cout<<"\n"; 
    }

    return 0; 
}
