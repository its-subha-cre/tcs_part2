#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string y="1011101011110";
	vector<int>v;
	v.push_back(0);
	for(int i=0;i<y.length();i++)
	{
		if(y[i]=='0')
		{
		v.push_back(i+1);	
		}
	}
	v.push_back(y.length()-1);
for(int i:v)
{
	cout<<i;
}
	string r="";
	string h="cad";
		for(int i=0;i<v.size()-1;i++)
	{
	if(v[i+1]-v[i]==5)
	{
	r+=h[1];	
	}
	if((v[i+1]-v[i]==2)||(v[i+1]-v[i]==1))
	{
		r+=h[0];
	}
	if(v[i+1]-v[i]==4)
	{
		r+=h[2];
	}
	/*else
	{
		r="";
	}*/
	}
	cout<<r;
}