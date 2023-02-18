
/* display a pattern of pascal triangle.
1
1 1 
1 2 1
1 3 3 1
1 4 6 4 1
// this follows a formula, a pattern.

first row : 0c0
second row: 1c0 1c1
third row : 2c0 2c1 2c2
fourth row: 3c0 3c1 3c2 3c3 .....  ;where 'c' stands for combination.
*/ 

#include<iostream>
#include<math.h>
using namespace std; 

int facto(int number)
{
    int fac = 1; 
    for(int i=number; i>0; i--)
    {
        fac = fac * i; 
    }

    return fac; 
}

int main()
{
    int size; 
    cout<<"\nEnter the size:\n";
    cin>>size;

    int i, j, space; 

    for(i=0; i<size; i++)
    {
        space = size - i;
        for(j=0; j<=space; j++)
        {
            cout<<" ";
        }
        for(j=0; j<=i; j++)
        {
            int answer = facto(i)/(facto(j)*facto(i-j));
            cout<<answer<<" "; 
        }
        cout<<endl;
    }

    return 0; 
}
