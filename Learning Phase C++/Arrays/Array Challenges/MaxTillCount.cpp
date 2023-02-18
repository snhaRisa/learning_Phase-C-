#include<iostream>
#include<climits>
using namespace std; 

int max_Array(int array[], int space)
{
    int maxy, counter; 
    maxy = INT16_MIN;

    for(counter=0; counter<space; counter++)
    {
        maxy = max(array[counter], maxy);
    }

    return maxy; 

}

int main()
{
    int size, count, result, index; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the numbers in array:\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];   
    }

    cout<<"\nEnter the index up-till you want the Maximum : ";
    cin>>index; 

    result = max_Array(arr, index);
    cout<<"The maximum number in the array is "<<result<<endl;

    return 0;  
}
