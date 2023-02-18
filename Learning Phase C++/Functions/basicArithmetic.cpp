#include<iostream>
using namespace std; 

void operations(int number1, int number2)
{   
    int result; 
    char oper; 
    cout<<"\nEnter the operation:\n";
    cin>>oper; 

    switch (oper)
    {
        case '+':
            result = number1 + number2; 
            break;

        case '-':
            result = number1 - number2; 
            break; 

        case '*':
            result = number1 * number2;
            break;

        case '/':
            result = number1 / number2;
            break;  
        
        default:
            cout<<"Something is wrong!"<<endl;
            break;
    }

    cout<<"The result is "<<result<<endl;
}

int main()
{
    int num1, num2;
    cout<<"\nEnter the numbers:\n"; 
    cin>>num1>>num2; 

    operations(num1, num2);

    return 0; 
}
