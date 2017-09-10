#include<iostream>
using namespace std;
int min(int a,int b){
	if(a>b)
	return b;
	else
	return a;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		int r;
			for(int i=0;i<n;i++){
		r=a[i]%k;
		if(a[i]<k){
			ans=ans+k-a[i];
		}
		else
		{
			ans=ans+min(r,k-r);
		}
		}
		cout<<ans<<endl;
	}
	
	
	
}
