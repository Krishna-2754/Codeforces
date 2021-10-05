//Kadanes algo
#include<bits/stdc++.h>
using namespace std;
int func(int a[],int n)
{
	int max_till=INT_MIN;
	int max_end=0;
	for(int i=0;i<n;i++)
	{
		max_end=max_end+a[i];
		if(max_till<max_end)
		{
			max_till=max_end;
		}
		if(max_end<0)
		{
			max_end=0;
		}
	}
	return max_till;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=func(a,n);
	cout<<ans;
}
//
//int func(int a[],int n)
//{
//	max_till=INT_MIN;
//	max_end=0;
//	for(int i=0;i<n;i++)
//	{
//		max_end=max_end+a[i];
//		if(max_till<max_end)
//		{
//			max_till=max_end;
//		}
//		else if(max_end<0){
//			max_end=0;
//		}
//	}
//	return max_till;
//}
//

















