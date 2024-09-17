#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int arr[7]={1,1,2,2,2,3,3};
	int i=0;
	for(int j=1;j<7;j++)
	{
	if(arr[i]!=arr[j])
	{
		arr[i+1]=arr[j];
		i++;
		}	
	}
	for(int k=0;k<=i;k++)
	{
		cout<<arr[k]<<endl;
	}	
}