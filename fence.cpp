#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t=0;
	cin>>t;
	while(t-->0)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		long long d,q;
		q=(b-c)*(b-c) + a*a;
		d= sqrt(q);
		cout<<d<<endl;
	}
	return 0;
}
