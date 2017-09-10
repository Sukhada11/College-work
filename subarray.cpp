#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count=n;
		int sum=0;
		int product=1;
		for(int i=2;i<=n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<i;k++){
				cout<<" k= "<<k<<endl;
				cout<<"Element: "<<a[j+k]<<endl;
				sum=sum+a[j+k];
				product=product*a[j+k];
			}
			cout<<"next k"<<endl;
			cout<<sum<<" "<<product<<endl;
			if(sum==product)
			count++;
			 sum=0;
	 product=1;
		}
		
	}
	cout<<count<<endl;
}}
