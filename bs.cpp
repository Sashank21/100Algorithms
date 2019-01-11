#include<iostream>
using namespace std;
int bs_rec(int arr[],int low,int high,int key);//binary search function using recursion
void bs(int arr[],int low,int high,int key);//binary seearch function without recursion
int main()
{
    int size,key,low,high,s1;
    cout<<"enter size of an array"<<"\n";
    cin>>size;
    int arr[size];


    cout<<"enter a sorted array"<<"\n";
    for(int i=0;i<size;i++)
        cin>>arr[i];//to read sorted elements of an array
    cout<<"enter an element to search:"<<"\n";
    cin>>key;
    low=0;high=size-1;//intializing low and high for index operations


    s1=bs_rec(arr,low,high,key);
    if(s1==-1)
        cout<<"element not found"<<endl;
    else
        cout<<"element is found at:"<<s1<<endl;


    bs(arr,low,high,key);
    return 0;
}
int bs_rec(int arr[],int low,int high,int key)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)//if element found at mid
            return mid;
        else if(key<arr[mid])
            return bs_rec(arr,low,mid-1,key);//if element is lessthan the mid value
        else if(key>arr[mid])
            return bs_rec(arr,mid+1,high,key);//if element is greater than mid value
    }
    return -1;//if element is not found
}
void bs(int arr[],int low,int high,int key)
{
    while(1)
    {
        if(low<high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==key)//if element found at mid
            {
                cout<<"element found at:"<<mid<<endl;
                break;
            }
            else if(key<arr[mid])//if element is lessthan the mid value
                high=mid-1;
            else if(key>arr[mid])//if element is greater than mid value
                low=mid+1;
        }
        else//if element is not found
        {
            cout<<"element not found"<<endl;
            break;
        }
    }
}












