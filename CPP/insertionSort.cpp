/*
Insertion sort algorithm
*/
#include<iostream>
using namespace std;
int main()
{
	int n,t,j;
	cout<<"Enter the size of array: ";
	cin>>n;
	int ar[n];
	cout<<"Enter elements in an array: ";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Elements are: ";
		for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<"\n";
	}
	for(int i=1;i<n;i++)
	{
		t=ar[i];
		for(j=i-1;j>=0&&t<ar[j];j--)
		{
			ar[j+1]=ar[j];
		}
		
    	ar[j+1]=t;
	}
	cout<<"sorted array is:";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<ar[i];
	}
}