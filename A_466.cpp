#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
        cout<<n*a<<"\n";
    else 
    {
    	int temp=(n/m)*b;
    	int temp1=(n%m)*a;
    	cout<<temp+min(temp1,b)<< "\n";
    }
    return 0;
}
