#include<iostream>
using namespace std;
//void insertionSort(int arr[],int n);//prototype for insertionsort function
//void swap(int arr[],int j);//prototype for swap function
void merge(int arr[],int low,int mid,int high,int n);
int main()
{
    int n;
    cout<<"enter length of the array:"<<"\n";
    cin>>n;//to read size of array
    int arr[n];

    cout<<"enter elements of the array"<<"\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];//to read elements of an array

    int low=0,high=n-1;
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high,n);
    }
}
void merge(int arr[],int low,int mid,int high,int n)
{
    int i=low,j=mid+1,k=low,b[n];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=arr[j];
        j++;
        k++;
    }
    return ;
}
