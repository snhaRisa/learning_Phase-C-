#include<iostream>
using namespace std; 

int main()
{
    int rows, cols, i, j; 
    cout<<"\nEnter the rows & cols:\n";
    cin>>rows>>cols; 

    for(i=1; i<=cols; i++)
    {
        for(j=1; j<=rows; j++)
        {
            cout<<"*";
        }
        cout<<"\n"; 
    }
    
    return 0; 
}
