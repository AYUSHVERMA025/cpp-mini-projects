//---------------------Simple Calulator------------------------//
//-------------------Made By - Vishal singh-------------------//

#include<iostream>
#include<stdlib.h> // to use exit() function

using namespace std;

int main()
{
    float num1,num2;
    char opr;    // to choose operator (+,-,*,/)
    float result;

    cout<<"Enter first number  : ";
    cin>>num1;
    cout<<"\nEnter second number : ";
    cin>>num2;

    cout<<"\nEnter operator : ";
    cin>>opr;

    switch(opr)
    {
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            if(num2!=0)
               result=num1/num2;
            else {
                  cout<<"\nCannot divide number by 0.";
                  exit(0);
                 }
            break;
        default:
            cout<<"Invalid Input";
            exit(0);
    }

    cout<<"\nResult : "<<result;

    return 0;
}
