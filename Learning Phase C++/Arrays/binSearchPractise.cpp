#include<iostream>
using namespace std; 

int bineSearch(int arr[], int space, int index)
{
    int start, end, mid, counter; 
    start = arr[0];
    end = arr[space-1];
    mid = (start+end)/2; 

    for(counter=0; counter<space; counter++)
    {
        if(index>arr[mid])
        {
            start = mid+1;
            end = space-1; 
        }
        else if(index<arr[mid])
        {
            start = 0; 
            end = mid-1; 
        }
        else
        {
            continue; 
        }

        if(index == arr[counter])
        {
            return (counter+1); 
        }
    }

    return -1; 
}

int main()
{
    int size, counter, key, result; 
    cout<<"\nEnter the size : ";
    cin>>size; 

    int array[size];
    cout<<"\nEnter the numbers in ascending order:\n";

    for(counter=0; counter<size; counter++)
    {
        cin>>array[counter];
    }

    cout<<"\nEnter the key to search : ";
    cin>>key; 

    result = bineSearch(array, size, key);

    if(result == -1)
    {
        cout<<"Key not present in database."<<endl;
    }
    else
    {
        cout<<"The key is present at "<<result<<" index.";
    }

    return 0; 
}
