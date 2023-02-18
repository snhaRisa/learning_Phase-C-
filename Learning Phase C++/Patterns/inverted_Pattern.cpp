#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"\nEnter the number for pattern :";
    cin>>n;

    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j>i)
            {
                break;
            }
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}