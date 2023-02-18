#include<iostream>
using namespace std; 

void insertSort(int array[], int space)
{
    int outCount, inCount, temp; 
    
    for(outCount=0; outCount<space; outCount++)
    {
        for(inCount=0; inCount<(space-1); inCount++)
        {
            if(array[inCount]>array[inCount+1])
            {
                temp = array[inCount];
                array[inCount] = array[inCount+1];
                array[inCount+1] = temp; 
            }
        }
        while(inCount>0)
        {
            if(array[inCount]<array[inCount-1])
            {
                temp = array[inCount];
                array[inCount]= array[inCount-1];
                array[inCount-1] = temp; 
            }
            inCount--;
        }
    }
    
    cout<<"\nThe sorted array is:\n";
    for(outCount=0; outCount<space; outCount++)
    {
        cout<<array[outCount]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size, count; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the numbers in array:\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];    
    }

    insertSort(arr, size);

    return 0; 
}