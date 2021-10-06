#include <iostream>
using namespace std;

int ans(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)//11 10 11 11   --   
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                    cnt++;
            }
        }
        if(cnt==0)
            return i;
        // cout<<cnt<<endl;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int k=0;k<n;k++)
	    {
	        cin>>arr[k];
	    }
	    int val=0;
	    val=ans(arr,n);
	    cout<<val+1<<endl;
	}
	return 0;
}
