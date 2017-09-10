#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,q;
		cin>>n>>q;
		int b[n][n];
			int a[n];
		for(int i=0;i<n;i++)
	a[i]=0;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j]=99;
			}
		}
		for(int i=0;i<q;i++){
			int x,y,val;
		
			cin>>x>>y;
			cin>>val;
			cout<<val<<x<<y<<endl;
			b[x-1][y-1]=val;
			if(b[y-1][x-1]!=val&&b[y-1][x-1]!=99)
			{cout<<"first"<<endl;
				goto xyz;
			}
			if(b[y-1][x-1]==99)
			{
				b[y-1][x-1]=val;
			}
		}
			int i;
		for( i=0;i<n;i++){
			if(b[i][i]==0)
			continue;
			if (b[i][i]==99){
			
			b[i][i]==0;
			}
		else{
		cout<<"Second"<<endl;
		goto xyz;
		}}
		cout<<"Yes"<<endl;
		goto abc;
	xyz:
	cout<<"No"<<endl;
	abc:;
	
	}
}
