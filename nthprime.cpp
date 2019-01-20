#include<iostream>
using namespace std;
int prime(int n);
int main()
{
    int n,s;
    cout<<"enter the nth value"<<"\n";
    cin>>n;//to read the nth value

    s=prime(n);
    cout<<"nth prime number is:";
    cout<<s<<endl;//to print the nth prime
}
int prime(int n)
{
    int z=0;//to count primes
    for(int i=1;i<32000;i++)//to check numbers of int rannge
    {
        int count=0;//to count divisors
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==1)
            z++;
        if(z==n)
            return i;
    }
}
