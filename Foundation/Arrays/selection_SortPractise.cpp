#include<iostream>
using namespace std; 

void selectSort(int arr[], int space)
{
    int outCount, inCount, temp; 
    for(outCount=0; outCount<(space-1); outCount++)
    {
        for(inCount=outCount+1; inCount<space; inCount++)
        {
            if(arr[outCount]>arr[inCount])
            {
                temp = arr[inCount];
                arr[inCount] = arr[outCount];
                arr[outCount] = temp; 
            }
            else
            {
                continue; 
            }
        }
    }

    cout<<"\nThe sorted array is:\n";
    for(inCount=0; inCount<space; inCount++)
    {
        cout<<arr[inCount]<<" ";
    }
}

int main()
{
    int size, counter;
    cout<<"\nEnter size:\n";
    cin>>size; 

    int array[size];
    cout<<"\nEnter numbers:\n";
    for(counter=0; counter<size; counter++)
    {
        cin>>array[counter];
    }

    selectSort(array, size);

    return 0; 
}
