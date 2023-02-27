#include<iostream>
using namespace std;

int main()
{
    char Alpha;
    cout<<"Enter Any alphabet : ";
    cin>>Alpha;

    /* This is taking the value of 1(true) or 0(false) for the match. We thus, take 'int' as the datatype.*/ 
    int lower = (Alpha=='a'||Alpha=='e'||Alpha=='i'||Alpha=='o'||Alpha=='u');
    int upper = (Alpha=='A'||Alpha=='E'||Alpha=='I'||Alpha=='O'||Alpha=='U');

    if(lower||upper)
    {
        cout<<"It is Vowel\n";
    }
    else
    {
        cout<<"Consonant\n";
    }

    return 0;
}

