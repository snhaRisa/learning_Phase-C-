#include<iostream>
using namespace std;

int main()
{
    int angle1,angle2,angle3;
    cout<<"Enter the angles : \n";
    cin>>angle1;
    cin>>angle2;
    cin>>angle3;
    int sum = angle1+angle2+angle3;
    if (sum==180)
    {
        if(angle1==90 || angle2==90 || angle3==90)
        {
            cout<<"Right triangle\n";
        }
        else if (angle1<90 || angle2<90 || angle3<9900)
        {
            cout<<"Acute Triangle\n";
        }
        else if(angle1>90 || angle2>90 || angle3>90)
        {
            cout<<"Obtuse Triangle\n";
        }
        else{
            cout<<"Something's wrong!\n";
        }
    }
    else
    {
        cout<<"Wrong combination of angles. Triangle cannot be formed";
    }

    return 0;
}