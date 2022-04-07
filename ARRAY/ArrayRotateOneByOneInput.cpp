#include <bits/stdc++.h>
using namespace std;

void LeftRotateArray(int arr[],int le){
	int temp = arr[0], i;
	for(i=0;i<le-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[le-1]=temp;
}

void ArrayRotate(int arr[],int d, int le)
{
	for(int i=0; i<d; i++)
	{
		LeftRotateArray(arr,le);
	}
}

void PrintArray(int arr[],int le){
	for(int i=0;i<le;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main() {
	int n,d,le;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter the arry number : ";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Who many number you want to rotate : ";
	cin>>d;
	le=sizeof(arr)/sizeof(arr[0]);
	ArrayRotate(arr,d,le);
	PrintArray(arr,le);
	return 0;
}
