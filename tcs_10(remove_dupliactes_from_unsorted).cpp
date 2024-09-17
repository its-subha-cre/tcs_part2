#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int arr[7]={4,2,1,3,1,3,67};
	vector<int>v;
	map<int,int>m;
	m[1]={0};
	int c=0;
	for(int i=0;i<7;i++)
	{

	if(m[arr[i]]>=1)
	{
		continue;
	}
		m[arr[i]]+=1;
		}
	
	for(auto i:m)
	{
		cout<<i.first<<"-"<<i.second<<endl;
	}
	
}