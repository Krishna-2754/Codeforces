#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int mt=0;
	int ct=0;
	while(t--)
	{
		int m,c;
		cin>>m>>c;
		if(m>c)
		{
			mt++;
		}
		if(c>m)
		{
			ct++;
		}
	}
	if(mt>ct)
	{
		cout<<"Mishka";
	}
	else if(ct>mt)
	{
		cout<<"Chris";
	}
	else{
		cout<<"Friendship is magic!^^";
		
	}
}
