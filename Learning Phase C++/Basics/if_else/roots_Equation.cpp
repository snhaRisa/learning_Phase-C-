#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c, discriminant, root_1, root_2;
    cout<<"Enter the numbers for the equation in following order : __x^2 + __x + ___ == 0 :";
    cin>>a>>b>>c;
    cout<<"The equation is : "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;

    //finding the roots type using discriminant formula.
    discriminant = sqrt((pow(b,2)) - (4*a*c));
    cout<<discriminant<<" is the discriminant\n";

    if (discriminant>0)
    {
        cout<<"Roots are real & distinct.\n";
    }
    else if (discriminant<0)
    {
        cout<<"Roots are complex in nature.\n";
    }
    else
    {
        cout<<"There is only one root.\n";
    }
    
    root_1 = (- b + discriminant)/ 2*a;
    root_2 = (- b - discriminant)/ 2*a;

    cout<<"The roots are as follows : "<<root_1<<" & "<<root_2;   

    return 0;
}