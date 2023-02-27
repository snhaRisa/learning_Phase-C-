#include<iostream>
using namespace std; 

/* /\/\ */
/*I have made this myself. I have brains. Great, Just work REGULARLY and HARD! */

int main()
{
    int size, i, j; 

    cout<<"\nEnter the size:\n";
    cin>>size; 

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(i==2 && (j%2==0))
            {
                cout<<"* ";
            }
            else if( i==1 && (j-3)%4==0 )
            {
                cout<<"* ";
            }
            else if( i==3 && (j-1)%4==0 )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0; 
}

