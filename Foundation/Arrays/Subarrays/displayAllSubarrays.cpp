//display all the sub-arrays of the array.

#include<iostream>
using namespace std; 

void displaySub(int arr[], int space)
{
    int outCount, inCount, innerCount; 
    for(outCount = 0; outCount<space; outCount++)
    {
        for(inCount=outCount; inCount<space; inCount++)
        {
            for(innerCount=outCount; innerCount<=inCount; innerCount++)
            {
                cout<<arr[innerCount];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int size, count=0; 
    cout<<"\nEnter the size : ";
    cin>>size; 

    int num[size];
    cout<<"Enter the numbers in array:\n";
    for(count; count<size; count++)
    {
        cin>>num[count];
    }

    displaySub(num, size);

    return 0;
}
