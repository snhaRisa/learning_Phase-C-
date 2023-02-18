#include<iostream>
using namespace std; 

void check_Alpha(char input)
{
    int nums = int(input);
    cout<<nums<<endl;

    if((nums>=96 && nums<=122) || (nums>=65 && nums<=90))
    {
        cout<<"This is an alphabet\n";
    }
    else
    {
        cout<<"This is not an alphabet\n";
    }
}

int main()
{
    char alpha; 
    int num; 

    cout<<"\nEnter an Alphabet:\n";
    cin>>alpha; 

    check_Alpha(alpha);

    return 0; 
}
