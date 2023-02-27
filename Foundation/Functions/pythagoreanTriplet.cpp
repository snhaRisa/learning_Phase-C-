#include<iostream>
#include<math.h>
using namespace std; 

void pythagorean_Triplet(int num1, int num2, int num3)
{
    int temp = pow(num1, 2);
    int temp2 = pow(num2, 2);
    int temp3 = pow(num3, 2); 
    if(temp == temp2 + temp3)
    {
        cout<<"This is a pythagorean triplet.\n"; 
    }
    else
    {
        cout<<"This isn't pythagorean triplet.\n"; 
    }
}

int main()
{
    int hypo, laid, stand; 
    int big, med, small;
    
    cout<<"\nEnter the numbers for Pythagorean Triplet :\n";
    cin>>hypo>>laid>>stand; 

    if(hypo>laid)
    {
        if(hypo>stand)
        {
            big = hypo;
            med = stand; 
            small = laid;  
        }
        else
        {
            big = stand; 
            med = hypo; 
            small = laid; 
        }
    }
    else if(laid>hypo)
    {
        if(laid>stand)
        {
            big = laid;
            med = stand; 
            small = hypo;  
        }
        else
        {
            big = stand; 
            med = laid;
            small = hypo; 
        }
    }
    
    
    cout<<big<<","<<med<<","<<small<<endl; 
    pythagorean_Triplet(big, med, small); 
    return 0; 
}
