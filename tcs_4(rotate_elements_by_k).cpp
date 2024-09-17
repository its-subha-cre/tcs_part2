#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int k=2;
	int d=0;
	while(d<k)
	{
	
	for(int i=0;i<4;i++)
	{

		
	std::swap(arr[i],arr[i+1]);	
	
}
d++;
}
for(int i=0;i<5;i++)
{
	cout<<arr[i];
}
}
