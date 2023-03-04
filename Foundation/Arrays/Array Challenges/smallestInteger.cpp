#include<iostream>
using namespace std; 

int missingNumber(int array[], int space)
{
    const int N = 1e6 + 2; 
    bool check[N];
    int count = 0, answer = -1;

    for(count=0; count<N; count++)
    {
        check[N] = false;
    }

    for(count=0; count<space; count++)
    {
        if(array[count] >= 0)
        {
            check[array[count]] = true; 
        }
    }

    for(count=0; count<N; count++)
    {
        if(check[count] == false)
        {
            answer = count; 
            return answer; 
        }
    }

    return answer; 
}

int main()
{
    int size, count=0, result; 

    cout<<"\nEnter the size : ";
    cin>>size;

    int arr[size];
    cout<<"\nEnter the array:\n";
    for(count; count<size; count++)
    {
        cin>>arr[count];
    }

    result = missingNumber(arr, size);

    cout<<"The missing integer is "<<result<<endl;

    return 0; 
}
