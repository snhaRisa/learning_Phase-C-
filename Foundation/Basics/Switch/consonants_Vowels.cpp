#include<iostream>
using namespace std;

int main ()
{
    char alpha;
    cout<<"\nEnter one Alphabet :\n";
    cin>>alpha;

    switch (alpha)
    {
    case 'a':
        cout<<"This is Vowel\n";
        break;
    
    case 'e':
        cout<<"This is Vowel\n";
        break;
    
    case 'i':
        cout<<"This is Vowel\n";
        break;
    
    case 'o':
        cout<<"This is Vowel\n";
        break;
    
    case 'u':
        cout<<"This is Vowel\n";
        break;

    default:
        cout<<"That's a consonant.\n";
        break;
    }

    return 0;

}