#include<iostream>
using namespace std;
long int fib(long int n,long int a,long int b);
int main()
{
    long int n,a=0,b=1,c,s;//intiating the first two values in fibonacci series
    cout<<"enter the nth value"<<"\n";
    cin>>n;//to read the nth value
    if(n==1)
        cout<<a<<endl;//to print first value in the series
    else if(n==2)
        cout<<b<<endl;//to print the second value in the series
    else
    {
        s=fib(n,a,b);
        cout<<s<<" "<<endl;//to print the nth value in the series
    }
    return 0;
}
long int fib(long int n,long int a,long int b)
{
    int c;
    n=n-2;
    while(n--)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
