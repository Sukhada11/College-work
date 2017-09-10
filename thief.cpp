#include<iostream>
using namespace std;
int main(){
	int y;
	cin>>y;
	while(y--){
		int n,s,t;
		cin>>n>>s>>t;
		int l=s*t;
		int a[n];
		int count=0,min=100,max=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
		
		}
		int b[101];
		for(int i=1;i<=100;i++){
			b[i]=0;
		}
		
		for(int i=0;i<n;i++){
		min=a[i]-l;
		max=a[i]+l;
		if(min<1)
		min=1;
		if(max>100)
		max=100;
		cout<<min<<" "<<max<<endl;
		for(int j=min;j<=a[i];j++){
			b[j]=1;
		}
		for(int j=a[i];j<=max;j++){
			b[j]=1;
		}
	}
	for(int i=1;i<=100;i++){
		if(	b[i]==0)
		count++;
		}
cout<<count<<endl;
}}
