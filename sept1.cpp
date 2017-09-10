#include<iostream>
using namespace std;
long long int ps(long long int a[],long long int psum,long long int i){
	return(psum-a[i]);
}
long long int ss(long long int a[],long long int ssum,long long int i){
	return(ssum+a[i]);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int a[n+1];
		long long int sum=0;
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum=sum+a[i];
		}
		a[n]=0;
		long long int minsum=2*sum;
		long long int mini=0;
		long long int psum=sum,ssum=0;
		for(int i=n;i>0;i--){
			psum=ps(a,psum,i);
			cout<<"Psum:"<<psum<<endl;
			ssum=ss(a,ssum,i-1);
			cout<<"Ssum:"<<ssum<<endl;
			long long int temp=ssum+psum;
			cout<<"Temp: "<<temp<<endl;
			if(minsum>=temp){
				minsum=temp;
				mini=i;
				cout<<"Minisum exceeds temp so now minsum is "<<minsum<<" and i is "<<i<<endl;
			}
			
		}
		cout<<mini<<endl;
	}
}
