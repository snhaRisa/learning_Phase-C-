#include<iostream>
using namespace std; 

void sumSub(int array[], int space)
{
    int outCount, inCount, sum=0; 
    for(outCount=0; outCount<space; outCount++)
    {
        sum = 0;
        for(inCount=outCount; inCount<space; inCount++)
        {
            sum+= array[inCount];
            cout<<"The sum is "<<sum<<endl; 
        }
    }
}

int main()
{
    int size, count, result; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the numbers in array:\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];
    }

    sumSub(arr, size); 

    return 0; 
}
