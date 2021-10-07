#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s1,s2,s3,s4;
		cin>>s1>>s2>>s3>>s4;
		int max1=-1;
		int max2=-1;
		int cnt=0;
		int flag=0;
		if(s1>s2)
			max1=s1;
		else if(s2>s1)
			max1=s2;
		if(s3>s4)
			max2=s3;
		else
			max2=s4;
		if(max1<s3)
			cnt++;
		if(max1<s4)
			cnt++;
		if(cnt<2)
			flag++;
		cnt=0;
		if(max2<s1)
			cnt++;
		if(max2<s2)
			cnt++;
		if(cnt<2)
			flag++;
		if(flag==2)
			cout<<"YES"<<endl;
		else if(flag!=2)
			cout<<"NO"<<endl;
	}
}
