#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout<<"\nEnter the number for Rhombus pattern :\n";
    cin>>n;

    for(i=n; i>0; i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }           
        }
        cout<<endl;
    }

    return 0;
}