#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	int pa=0;
	int cr=0;
	int un=0;
	int tpa=0;
	for(int i=0;i<t;i++)
	{
		if(a[i]>0)
		{
			if(a[i]>10)
			{
				pa=pa+10;
			}
			else{
				pa=pa+a[i];
				tpa=tpa+a[i];		
			}			
		}
		if(a[i]<0)
		{
			cr++;
			if(pa>0){
				pa--;
			}
			else{
				un++;	
			}
		}
	}
	cout<<un;
}
