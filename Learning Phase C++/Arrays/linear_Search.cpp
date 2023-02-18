#include<iostream>
using namespace std; 

int linear_Searching(int num[], int length, int term)
{
    int i; 
    for(i=0; i<length; i++)
    {
        if(num[i]==term)
        {
            return i; 
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
    int size, i, key; 
    cout<<"\nEnter the size : ";
    cin>>size; 

    int arr[size]; 
    cout<<"\nEnter the elements :\n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    } 
    cout<<"Enter the key to search : ";
    cin>>key; 

    int result = linear_Searching(arr, size, key);
    if(result==-1)
    {
        cout<<"Data is not present.\n";
    }
    else
    {
        cout<<"Data is present at "<<(result+1)<<endl; 
    }

    return 0; 
}