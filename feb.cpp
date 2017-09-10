#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
	long long int n;
	
			
	cin>>n;
	int a[n];
		long long int  month=0;
		long long int  k=0;
		long long int  count=0;
	
	for(	long long int  i=0;i<n;i++){
		cin>>a[i];
	
}
	for(	long long int  i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			a[i]=1;
			a[i+1]=0;
			count++;
		}
}
	for(	long long int  i=0;i<n;i++){
	
	if(a[i]==0)	{
	count++;month++;
}}


		cout<<month*1000+count*100<<endl;
	}
}


