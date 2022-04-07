#include <bits/stdc++.h>
using namespace std;

void RotateArray(int arr[],int le){
	int temp=arr[le-1],i;
	for(i=le-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}

void RightRotateArray(int arr[],int d,int le){
	for(int i=0;i<d;i++){
		RotateArray(arr,le);
	}
}

void PrintArray(int arr[],int le){
	for(int i=0;i<le;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n,d,le;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter the element of array : ";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the right shift element number : ";
	cin>>d;
	le=sizeof(arr)/sizeof(arr[0]);
	RightRotateArray(arr,d,le);
	PrintArray(arr,le);
	return 0;
}
