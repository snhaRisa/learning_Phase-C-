#include<iostream>
using namespace std;

int main()
{
    int rows, cols, i, j;

    cout<<"\nEnter the rows and coloumns : ";
    cin>>rows>>cols;

    for(i=0; i<rows; i++)
    {
        for(j=0;j<cols;j++)
        {
            if(j==0 || j==cols-1 || i == 0 || i == rows-1)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }    
        }
        cout<<endl;
    }

    return 0;
}