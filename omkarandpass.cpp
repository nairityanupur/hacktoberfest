#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		
		int n;
		cin>>n;
		
		bool f=true;
		
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		
		
			for(int j=1; j<n; j++){
				if(a[0]!=a[j])
				f=false;
			}
		
		
		if(f) cout<<n;
		else cout<<"1";
		
		cout<<endl;
	}
	return 0;
}
