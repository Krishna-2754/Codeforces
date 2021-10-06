//151A - Soft Drinking 

#include <iostream>
using namespace std;
int main() {
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int val1=k*l;
	int val2=val1/nl;
	int val3=c*d;
	int val4=p/np;
	int a1=val2/n;
	int a2=val3/n;
	int a3=val4/n;
	if(a1<a2 && a1<a3)
	    cout<<a1;
	else if(a2<a1 && a2<a3)
	    cout<<a2;
	else
	    cout<<a3;
	   
}