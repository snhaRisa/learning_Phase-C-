#include<iostream>
using namespace std; 

void bubSort(int array[], int space)
{
    int outCount, inCount, temp;
    int check_1 = space;
    int check = space;  

    for(outCount=0; outCount<(check_1-1); outCount++)
    {
        for(inCount=0; inCount<check; inCount++)
        {   
            if(array[inCount]>array[inCount+1])
            {
                temp = array[inCount+1];
                array[inCount+1] = array[inCount];
                array[inCount] = temp; 
            }
        }
        check--;
    }

    cout<<"\nThe sorted array is:\n";
    for(outCount=0; outCount<space; outCount++)
    {
        cout<<array[outCount]<<" ";
    }
}

int main()
{
    int size, count; 
    cout<<"\nEnter size:\n";
    cin>>size; 

    int arr[size];
    cout<<"\nEnter the numbers:\n";
    for(count=0; count<size; count++)
    {
        cin>>arr[count];
    }

    bubSort(arr, size);

    return 0;
}
