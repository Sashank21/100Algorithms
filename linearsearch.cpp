#include<iostream>
using namespace std;
int ls(int a[],int size,int ele);//function for linear search without recursion
int ls_rec(int a[],int size,int ele,int j);//function for linear search with recursion
int main()
{
	int size,ele,j=0,position1,position2;
	cout<<"enter no. of elements:"<<"\n";
	cin>>size;
	int a[size];
	cout<<"enter numbers"<<"\n";
	for(int i=0;i<size;i++)
		cin>>a[i];
	cout<<"enter element to be searched:"<<"\n";
	cin>>ele;


	position1=ls(a,size,ele); //to call non recursive search function
	if(position1==-1)
        cout<<"element not found"<<endl;
    else
        cout<<"element found at"<<position1<<endl;


    position2=ls_rec(a,size,ele,j);//to call recursive search function
    if(position2==-1)
        cout<<"element not found"<<endl;
    else
        cout<<"element found at"<<position2<<endl;


	return 0;
}
//non-recursive linear search function
int ls(int a[],int size,int ele)
{
	for(int i=0;i<size;i++)
	{
		if(a[i]==ele)
            return (i+1);
	}
    return -1;
}
//recursive linear search function
int ls_rec(int a[],int size,int ele,int j)
{
    if(j>size-1)
        return -1;
    else if(a[j]==ele)
        return (j+1);
    else
        return ls_rec(a,size,ele,j+1);
}
