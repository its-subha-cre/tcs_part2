#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v={8,7, 1, 6, 5, 9};
	int k=v.size()/2;
	vector<int>x;
	vector<int>y;
	for(int i=0;i<k;i++)
	{
		x.push_back(v[i]);
	}
	sort(x.begin(),x.end());
		for(int i=3;i<v.size();i++)
	{
		y.push_back(v[i]);
	}
	sort(y.begin(),y.end());
	reverse(y.begin(),y.end());
	for(int i=0;i<y.size();i++)
	{
		x.push_back(y[i]);
	}
	for(int z:x)
	{
		cout<<z<<" ";
	}
}
