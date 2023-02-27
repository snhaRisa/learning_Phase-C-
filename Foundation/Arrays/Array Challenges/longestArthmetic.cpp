#include<climits>
#include <iostream>
using namespace std;

void langArithmetic(int array[], int space)
{
    int counter, max_Seq = INT16_MIN, Seq = 0;
    int curr_Diff = 0;
    int prev_Diff = INT16_MIN;

    for(counter=0; counter<space; counter++)
    {
        curr_Diff = array[counter] - array[counter+1];
        if(prev_Diff==curr_Diff)
        {
            Seq++;
            prev_Diff=curr_Diff;
            max_Seq = max(max_Seq, Seq);
        }
        else
        {
            Seq = 1; 
            prev_Diff = curr_Diff;
        }
    }

    cout<<"\nThe longest arithmetic sequence is "<<(max_Seq+1)<<endl;
}

int main()
{
    int size, count;
    cout << "\nEnter the size:\n";
    cin >> size;

    int arr[size];
    cout << "\nEnter the numbers:\n";
    for (count = 0; count < size; count++)
    {
        cin >> arr[count];
    }

    langArithmetic(arr, size);

    return 0;
}
