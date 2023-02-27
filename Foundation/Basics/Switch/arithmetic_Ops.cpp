#include<iostream>
using namespace std; 

int main()
{
    int num1, num2, result;
    char oper;  
    
    cout<<"\nEnter two number:\n"; 
    cin>>num1>>num2; 
    cout<<"Enter the operation: "; 
    cin>>oper; 

    switch (oper)
    {
        case '+':
            result = num1+num2; 
            break;
        
        case '-':
            result = num1-num2; 
            break; 
        
        case '*':
            result = num1*num2; 
            break; 
        
        case '/':
            result= num1/num2; 
            break; 

        default:
            cout<<"Something's Wrong\n"; 
            break;
    }

    cout<<"The result is "<<result<<endl; 

    return 0; 
}
