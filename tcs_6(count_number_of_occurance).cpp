#include<iostream>

#include<vector>
#include<map>
using namespace std;
int main()
{
	map<int,int>m;

	vector<int>v={10,5,10,15,10,5,6,6};
	
	m[10]={0};
	for(int i:v)
	{
		m[i]+=1;
	}
	for(auto j:m)
	{
		cout<<j.first<<"-"<<j.second<<endl;
	}
}