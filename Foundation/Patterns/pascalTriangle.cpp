#include<iostream>
using namespace std;

int main ()
{
    int n, i, j, space, coef=1;
    cout<<"\nEnter the number for size :\n";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        space = n-i;
        for(j=0;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            {
                coef=1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }

    return 0;
}
