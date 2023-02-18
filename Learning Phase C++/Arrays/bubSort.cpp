#include<iostream>
using namespace std; 

//Bubble sorting is a technique, in which we compare each element as a pair. One by one. 
//We swap the position if we have a bigger element. This way, the largest possible element goes at the end of the array. 
//This goes on till we get a sorted array. 

void bubbleSort(int array[], int space)
{
    int counter, index, temp, index1; 
    index = space;
    index1 = space;  
    
    while(index1>0)
    {
        for(counter=0; counter<index; counter++)
        {
            if(array[counter]>array[counter+1])
            {
                temp = array[counter+1];
                array[counter+1] = array[counter];
                array[counter] = temp; 
                continue;
            } 
            index--;
        }
        index1--;
    }
    

    cout<<"\nThe sorted array is as:\n";
    for(counter=0; counter<space; counter++)
    {
        cout<<array[counter]<<endl;
    }
}

int main()
{
    int size, count; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the array:\n";
    
    for(count=0; count<size; count++)
    {
        cin>>arr[count];
    }

    bubbleSort(arr, size);

    return 0; 
}
