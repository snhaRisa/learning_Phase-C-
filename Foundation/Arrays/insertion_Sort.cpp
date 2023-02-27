#include<iostream>
using namespace std; 

//Insertion is a sorting technique in which the element is compared to the next element. If the next element is smaller. They are swapped. 
//Similarly, It is also compared with the element before it. If the left element to the element is bigger, the places is swapped. This way the whole of the array is traversed and sorted. Each element is sorted one by one. 

void insertSort(int array[], int space)
{
    int counter=0, temp, counter_2; 

    for(counter; counter<space; counter++)
    {
        if(array[counter]>array[counter+1])
        {
            temp = array[counter+1];
            array[counter+1] = array[counter];
            array[counter] = temp;  
        }
        counter_2 = counter; 
        while(counter_2>0)
        {
            if(array[counter_2]<array[counter_2-1])
            {
                temp = array[counter_2];
                array[counter_2] = array[counter_2-1];
                array[counter_2-1] = temp; 
            }
            counter_2--; 
        }
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
    cout<<"\nEnter the numbers in array:\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];    
    }

    insertSort(arr, size);

    return 0; 
}
