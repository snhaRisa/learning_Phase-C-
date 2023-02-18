#include<iostream>
using namespace std; 

int main()
{
    int arr[5];
    int count=0, sum=0; 
    
    for(count; count<5; count++)
    {
        cout<<"\nEnter the "<<(count+1)<<" element: "; 
        cin>>arr[count];
    }
    
    for(count=0; count<5; count++)
    {
        sum+= arr[count]; 
    }

    cout<<"\nThe sum of array's elements is "<<sum<<endl;

    return 0;  
}
