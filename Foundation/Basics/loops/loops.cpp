#include<iostream>
using namespace std;

/*they are used to reduce the tedious writing of repetative codes.
Now, there are three types of loops
1.)For loop
2.)While loop
3.)do-While*/

int main()
{
    int n;
    cout<<"Enter the number for Sum : \n";
    cin>>n;

    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
        cout<<"SUM : "<<sum<<endl;
    }

    cout<<"the total is : "<<sum<<endl;
    return 0;
}