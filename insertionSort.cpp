#include<iostream>
using namespace std;
void insertionSort(int arr[],int n);//prototype for insertionsort function
void swap(int arr[],int j);//prototype for swap function
int main()
{
    int n;
    cout<<"enter length of the array:"<<"\n";
    cin>>n;//to read size of array
    int arr[n];


    cout<<"enter elements of the array"<<"\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];//to read elements of an array


    insertionSort(arr,n);


    cout<<"sorted array is"<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";//to print the sorted array
    return 0;
}
void insertionSort(int arr[],int n)//function to sort elements of an array
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(arr[j-1]>arr[j])//condition to compare two elements
                swap(arr,j);
        }
    }
}
void swap(int arr[],int j)//function for swapping
{
    int t;
    t=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=t;
}
