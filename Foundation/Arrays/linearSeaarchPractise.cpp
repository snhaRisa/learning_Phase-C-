#include<iostream>
using namespace std; 

int linSearch(int arr[], int space, int index)
{
    int count; 
    for(count=0; count<space; count++)
    {
        if(arr[count]==index)
        {
            return (count+1); 
        }
        else
        {
            continue; 
        }
    }

    return -1; 
}

int main()
{
    int size, count, key, result; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int array[size];
    cout<<"\nEnter the numbers:\n";
    for(count=0; count<size; count++)
    {
        cin>>array[count];
    }
    
    cout<<"\nEnter the key to search: ";
    cin>>key; 

    result = linSearch(array, size, key);

    if(result==-1)
    {
        cout<<"\nIndex not present.\n";
    }
    else
    {
        cout<<result<<" is the index of the key."<<endl; 
    }

    return 0; 
}