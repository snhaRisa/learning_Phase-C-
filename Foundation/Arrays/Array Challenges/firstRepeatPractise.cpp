#include<iostream>
using namespace std; 

void firstRepeat(int array[], int space)
{
    const int N = 1e6+2; //declaring a new type of variable. 
    int inArr[N];
    int count=0, check=0; 
    
    for(count=0; count<N; count++) //initializing my long array with only -1 as its data. 
    {
        inArr[count] = -1; 
    }

    for(count=0; count<space; count++)
    {
        if(inArr[array[count]] != -1)
        {
            cout<<"The first repeating element is "<<array[count]<<endl;
            break; 
        }
        else
        {
            inArr[array[count]] = check++;
            continue; 
        }
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

    firstRepeat(arr, size);

    return 0; 
}