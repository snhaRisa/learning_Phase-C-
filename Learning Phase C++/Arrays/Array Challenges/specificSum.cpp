#include<iostream>
using namespace std; 

void specificSum(int array[], int space, int finalSum)
{
    int start, end, curSum=array[0], count=0; 
    
    for(count; count<space; count++)
    {
        
    }
}

int main()
{
    int size, count=0; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the array:\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];
    }

    int sum; 
    cout<<"Enter the specific sum : ";
    cin>>sum; 

    specificSum(arr, size, sum);

    return 0; 
}
