#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[],int size,int key,int jump);
int main()
{
    int size,jump,key,s;
    cout<<"enter size of the array:";
    cin>>size;
    int arr[size];

    jump=floor(sqrt(size));                           // to round off the jump to minimum decimal

    cout<<"jump is:"<<jump<<"\n";
    cout<<"enter the sorted array:"<<"\n";
    for(int i=0;i<size;i++)
        cin>>arr[i];                                  // to read the sorted array
    cout<<"enter the element to be searched:";
    cin>>key;

    s=jumpSearch(arr,size,key,jump);                  // function for jump search


    if(s==0)
        cout<<"element not found";                   // if element not found in the array
    else
        cout<<"element found at"<<""<<s+1<<"position";//if element found printing the position
    return 0;
}
int jumpSearch(int arr[],int size,int key,int jump)
{
    int flag=0;
    for(int i=0;i<size;i=i+jump)
    {
        if(key==arr[i])                               // if element is matched
        {
            flag=1;
            return i;                                 // returing the position of the element
        }
        if(arr[i]>key)                                //if key is lesser than array element
        {
            for(int j=i-1;j>0;j--)                    // checking the preceeding elements
            {
                if(arr[j]==key)
                {
                    flag=1;
                    return j;
                }
            }
        }
    }
    if(flag==0)
        return 0;
}
