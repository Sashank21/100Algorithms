#include<iostream>
using namespace std;
void bubblesort(int arr[],int n);//prototype for bubblesort function
void swap(int arr[],int i,int j);//prototype for swap function
int main()
{
    int size;
    cout<<"enter size of the array"<<"\n";
    cin>>size;//to read size of array
    int arr[size];


    cout<<"enter elements of array"<<"\n";
    for(int i=0;i<size;i++)
        cin>>arr[i];//to read elements of an array


    bubblesort(arr,size);


    cout<<"after sorting array elements are:"<<"\n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";//to print the sorted array
    return 0;
}
void bubblesort(int arr[],int n)//function to sort elements of an array
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])//condition to compare two elements
                swap(arr,i,j);
        }
    }
}
void swap(int arr[],int i,int j)//function for swapping
{
    int t;
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}
