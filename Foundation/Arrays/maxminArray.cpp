#include<iostream>
#include<math.h>
#include<climits> //used for initializing the minimum and maximum number. 
using namespace std; 

int main()
{
    int size, counter; 
    cout<<"\nEnter the size of array:\n";
    cin>>size;
    
    int arr[size];
    int max_Num, min_Num;

    max_Num = INT_MIN; //INT_MIN is the lowest possible digit in C++.
    min_Num = INT_MAX; //INT_MAX is the highest possible digit in C++. 

    for(counter=0; counter<size; counter++)   // input for the array. 
    {
        cout<<"Enter the "<<(counter+1)<<" element : ";
        cin>>arr[counter];
    }

    for(counter=0; counter<size; counter++) // finding max and min. 
    {
        max_Num = max(max_Num, arr[counter]);
        min_Num = min(min_Num, arr[counter]);
    }

    cout<<"\nThe maximum and minimum from the array is "<<max_Num<<" & "<<min_Num<<" respectively."<<endl;
  
    return 0; 
}
