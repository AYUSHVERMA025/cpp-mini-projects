#include<iostream>

using namespace std;

long int factorial(long int y)
{

    if(y == 0)
        return 1;

    return y * factorial(y-1);

}

int main()
{
    long int n;
    int result;

    cout<<"Enter number : ";
    cin>>n;

    result = factorial(n);
    cout<<"\nFactorial : "<<result;

    return 0;
}

