#include<iostream>
using namespace std; 

int missingInteger(int arr[], int space)
{
    const int N = 1e6+2; 
    bool check[N];
    int counter = 0, answer = -1; 
   
    //Initializing boolean array with a value false.
    for(counter; counter<N; counter++)
    {
        check[counter] = false;               
    }

    //Checking the input array and modifing our bool array. 
    for(counter=0; counter<space; counter)
    {   
        if(arr[counter] >=0 )
        {
            check[arr[counter]] = true;
        } 
    }

    //Iterating over bool array to check first index of missing positive number. 
    for(counter = 0; counter<N; counter++)
    {
        if(check[counter]==false)
        {
            answer = counter; 
            break; 
        }
    }

    return answer; 
}

int main()
{
    int size, count=0; 
    cout<<"\nEnter the size : ";
    cin>>size; 

    int inputArr[size];
    
    cout<<"Enter the array values :\n";
    
    for(count=0; count<size; count++)
    {
        cin>>inputArr[count];
    }

    int resultNum = missingInteger(inputArr, size);
    cout<<"The value of smallest missing number is "<<resultNum<<endl;

    return 0;
}
