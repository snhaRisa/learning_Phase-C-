#include<iostream>
using namespace std;

int main()
{
    int numbers[4] = {10, 20, 30, 50};

    /*There are many ways to declare and initialize an array. 
    numbers[0]=10; 
    numbers[1]=11; 
    numbers[2]=14;
    numbers[3]=8; */

    /* using a loop to input the values in the array. 
    for(int i=0; i<4; i++)
    {
        cin>>numbers[i];
    }*/

    for(int i=0; i<4; i++)
    {
        cout<<numbers[i]<<endl; 
    }

    return 0;
}
