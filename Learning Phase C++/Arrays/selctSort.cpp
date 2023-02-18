#include<iostream>
using namespace std; 

//In selection sort, we compare a fixed element to each and every element to find the smallest element in the array.
//That smallest (iff) is swapped with the first element. 
//This way, we get a sorted array of one element.
//We do this till we get a complete sorted array. 

void selectSort(int array[], int space)
{
    int outCount, inCount, temp;
    
    for(outCount=0; outCount<(space-1); outCount++)
    {   
        for(inCount=(outCount+1); inCount<space; inCount++)
        {
            if(array[outCount]>array[inCount])
            {
                temp = array[outCount];
                array[outCount] = array[inCount];
                array[inCount] = temp; 
            }
        }
    } 

    int counter=0; 
    
    cout<<"\nSORTED ARRAY:\n";
    for(counter=0; counter<space; counter++)
    {
        cout<<array[counter]<<endl; 
    }
}

int main()
{
    int size, count; 
    
    cout<<"\nEnter the size :\n";
    cin>>size; 

    int arr[size]; 

    cout<<"\nEnter the numbers of array :\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];
    }

    selectSort(arr, size);

    return 0; 
}
