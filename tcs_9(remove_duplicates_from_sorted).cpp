#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int arr[7]={1,1,2,2,2,3,3};
	set<int>s;
	for(auto i:arr)
	{
	s.insert(i);	
	}
	for(auto j:s)
	{
		cout<<j<<" ";
	} 
	
}