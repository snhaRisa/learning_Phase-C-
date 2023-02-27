#include<iostream>
#include<climits>
using namespace std;

//We need to check the present number, it should satisfy two conditions;
//a.)It is greater than all the previous number.
//b.)It is greater than the following number. 

void recordCheck(int array[], int space)
{
    int counter, maxNum = INT16_MIN, answer=0;
    
    for(counter=0; counter<=space; counter++)
    {
        if(maxNum<array[counter] && array[counter]>array[counter+1])
        {
            maxNum = max(maxNum, array[counter]);
            answer++;
        }
    }
    cout<<"Number of record breaking days : "<<answer<<endl;
}

int main()
{
    int size, count; 
    cout<<"\nEnter the size for array:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the numbers for array:\n";    
    
    for(count=0; count<size; count++)
    {
        cin>>arr[count];
    }

    recordCheck(arr, size);

    return 0; 
}
