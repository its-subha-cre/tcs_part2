#include<iostream>
using namespace std;
int main()
{
	string y="hello wor ld rrtdh";
	string h="";
	int c=0;
	for(int i=0;i<y.length();i++)
	{
			if(y[i]==' ')
		{
			c++;
		}
			if(y[i]==' ' && c==2)
		{
			continue;
		}
		
		h+=y[i];
	}
cout<<h;
}