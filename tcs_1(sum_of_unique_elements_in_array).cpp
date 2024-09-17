#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	vector<int>v;
	set<int>s1;
		int sum=0;
	int arr[7]={10,20,15,15,10,30,60};
	int s=0;
	for(int i=0;i<7;i++)
	{
		s+=arr[i];
	}
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(arr[i]==arr[j])
			{
				sum+=arr[j];
				s1.insert(arr[i]);
			}
		}
	}
	for(auto n:s1)
	{
		sum+=n;
	}
	cout<<(s-sum);
}