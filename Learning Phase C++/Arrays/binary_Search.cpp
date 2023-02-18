#include<iostream>
using namespace std; 

int binary_Searching(int num[], int index, int term)
{
    int start = 0; 
    int end = index;
    int middle = (start+end)/2; 

    while(start<middle)
    {   
        if(term == num[middle])
        {
            return middle; 
        }
        else if(term<num[middle])
        {
            end = middle-1;
        }
        else if(term>num[middle])
        {
            start = middle+1; 
        }
        else
        {
            continue;
        }
        middle = (start+end)/2;
    } 

    return -1; 
}

int main()
{
    int size, i, key, result; 
    cout<<"\nEnter the size : ";
    cin>>size; 
    int arr[size];
    cout<<"\nEnter the elements :\n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the key : ";
    cin>>key; 


    result = binary_Searching(arr, size, key);
    if(result==-1)
    {
        cout<<"Data not present\n";
    }
    else
    {
        cout<<"Data is there at "<<(result+1)<<endl; 
    }

    return 0; 
}
