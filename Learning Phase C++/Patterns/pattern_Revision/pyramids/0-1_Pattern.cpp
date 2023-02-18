#include<iostream>
using namespace std; 

int main()
{
    int size; 
    int i, j; 
    bool check = 0; 

    cout<<"\nEnter the size:\n"; 
    cin>>size; 

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<check;
            check = !check;
        }
        //one of the logic can be of adding i & j. Then dividing them with 2. It will either give 0 or 1.//
        cout<<endl; 
    }

    return 0; 
}
