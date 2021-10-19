#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int i=0;
	while(n--)
	{
		cin>>a[i]>>b[i];
		i++;
	}
	int cnt=0;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<b[i];
		if(a[i]!=b[i])
			cnt++;
	}
	if(cnt>0)
		cout<<"rated";
	int c[n];
	for(i=0;i<n;i++)
		c[i]=a[i];
	sort(c,c+n);
	if(cnt==0)
	{
		int flag=0;
		for(i=0;i<n;i++)
		{
			if(c[(n-i)-1]!=a[i])
			{
				cout<<"maybe";
				flag=1;
			}
		}
		if(flag==0)
			cout<<"unrated";
	}
}
