#include<iostream>
#include<climits>
using namespace std; 

//I have not done this code by myself. Tough, need to look for an optimized solution. 

int firstRepeat(int arr[], int space)
{
    const int N = 1e6+2; 
    int newArr[N], counter, minIndex=INT_MAX;

    for(counter=0; counter<N; counter++)
    {   
        newArr[counter] = -1; 
    }

    for(counter=0; counter<space; counter++)
    {
        if(newArr[arr[counter]] == -1)
        {
            newArr[arr[counter]] = counter;
        }
        else
        {
            minIndex = min(minIndex, newArr[arr[counter]]);
        }
    }

    if(minIndex == INT_MAX)
    {
        return -1; 
    }
    else
    {
        return minIndex;
    }

}

int main()
{
    int size, count, result; 
    cout<<"\nEnter the size:\n";
    cin>>size; 

    int array[size];
    cout<<"\nEnter the numbers:\n";
    for(count=0; count<size; count++)
    {
        cin>>array[count];
    }

    result = firstRepeat(array, size);
    if(result == -1)
    {
        cout<<"Numbers Repeat NO!"<<endl;
    }
    else
    {
        cout<<"\nThe smallest repeating element's index is "<<result<<endl;
    }
     

    return 0; 
}
