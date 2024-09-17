#include<iostream>
using namespace std;
double cal(int arr[],int n)
{
	int x;
	double median;
	if(n%2!=0)
	{
		x=(n-1)/2;
	median=arr[x];	
		return median;
	}
else
	{
		int x=n/2;
	median=arr[x]+arr[x-1];
	
	median=median/2;
	//cout<<median<<endl;
		return median;	
	}
}
int main()
{
	int n;
	
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the value of array"<<endl;
		cin>>arr[i];
	}
	double x;
	x=cal(arr,n);
	cout<<x;
	return 0;
}