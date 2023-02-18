#include<iostream>
using namespace std; 

void specific_Sum(int arr[], int space)
{
    
}

int main()
{
    int size, count; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int array[size];
    cout<<"\nEnter the numbers:\n";
    for(count=0; count<size; count++)
    {
        cin>>array[count];
    }

    specific_Sum(array, size);

    return 0; 
}
